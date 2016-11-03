#include <string>
#include <iostream>
#include <string>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>
#include "mp3.h"
#include "genres.h"
#include "database.h"
#include <sstream>
#include <algorithm>
#include <cctype>

//chad

using namespace boost::filesystem;
using namespace std;

string genres[148];


int main()
{
    initialize_genres();
    Database * r = new Database();
    r->read("./songs/");
    cout << "Read " <<  r->size() << " MP3 files" << endl; 
    while(true)
    {
        string command;
        cout << "Type 'list' or enter a query: [artist/title/album/year] [query]" << endl;
        getline(cin, command);
        //transform(command.begin(), command.end(), command.begin(), ::tolower);
        istringstream iss(command);
        string blank;
        vector<string> entry;
        copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(entry));
        
        if(entry.empty())
        {
            cout << "You didn't enter anything!!" << endl;
        }

        else if(entry[0] == "artist" && entry.size() <= 2)
        {
                r->search_artist(entry[1]);
        }
        
        else if(entry[0] == "title" && entry.size() <= 2)
        {
                r->search_title(entry[1]);
        }

        else if(entry[0] == "album" && entry.size() <= 2)
        {
                r->search_album(entry[1]);
        }

       else if(entry[0] == "year" && entry.size() <= 2)
        {
                r->search_year(entry[1]);
        }

        else if(entry[0] == "list")
        {
            r->show_all();
        }

        else if(entry[0] == "quit")
        {
            break;
        }

        else 
        {
            cout << "Huh?" << "\n" << endl;
        }
    }
    delete r;
    return 0;
}
