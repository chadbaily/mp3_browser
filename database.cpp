#include "database.h"
#include <iomanip>
#include <fstream>

Database::Database(){
}

vector<MP3*> Database::read(string directory){
    path p(directory); 
    for(directory_iterator it(p); it != directory_iterator(); ++it)
    {
        path p2 = it->path();
        if(is_directory(p2))
        {//need to pass in a path variable into the read function
            read(p2.string());
        }

        else if(is_regular_file(p2))
        {
            string cur_path = it->path().string();
            ifstream f(cur_path.c_str(), ios::in | ios::binary);
            if(f.is_open())
            {
                 char title[31];
                int filelength = f.tellg() - 128;
                f.seekg(filelength);
                f.read(title, 30);
                title[30] = 0;

                 char artist[31];
                f.seekg(filelength+30);
                f.read(artist, 30);
                artist[30] = 0;

                 char album[31];
                f.seekg(filelength+60);
                f.read(album, 30);
                album[30] = 0;

                 char year[5];
                f.seekg(filelength + 90);
                f.read(year, 5);
                year[4] = 0;

                 char comment[31];
                f.seekg(filelength + 95);
                f.read(comment, 30);
                comment[30] = 0;

                 char g[2];
                f.seekg(filelength + 125);
                f.read(g, 1);
                g[1] = 0;


                MP3* song = new MP3((unsigned char*)title, (unsigned char*)artist, (unsigned char*)album, (unsigned char*)year, (unsigned char*)comment, (unsigned char*)g);
                songs.push_back(song);
            }
            f.close();


    //     string current_file = it->path().string();
      //               cout << current_file << endl;
        }
    }

    return songs;
}

vector<MP3*> Database::search_title(string _title){

    return songs;
}

vector<MP3*> Database::search_artist(string _artist){

    return songs;
}

vector<MP3*> Database::search_album(string _album){

    return songs;
}

vector<MP3*> Database::search_year(int year){

    return songs;
}

void Database::show_all(){
    for(unsigned int i = 0; i < songs.size(); i++)
    {
         songs[i]->printSong();
    }
}
