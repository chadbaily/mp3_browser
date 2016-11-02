#include <string>
#include <iostream>
#include <string>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>
#include "mp3.h"
#include "genres.h"
#include "database.h"
using namespace boost::filesystem;
using namespace std;

string genres[148];


int main()
{
    initialize_genres();
    Database * r = new Database();

    r->read("./songs/");
   
    r->search_year("2003");
    
    delete r;
    return 0;
}
