#include "database.h"

Database::Database(){
}

list<MP3> Database::read(string directory){
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
                unsigned char title[31];
                int length = f.tellg() - 128;
                f.seekg(length);
                f.read(title, 30);
                title[30] = 0;

                unsigned char artist[31];
                f.seekg(length+30);
                f.read(artist, 30);
                artist[30] = 0;

                unsigned char album[31];
                f.seekg(length+60);
                f.read(album, 30);
                album[30] = 0;

                unsigned char year[5];
                f.seekg(length + 90);
                f.read(year, 5);
                year[4] = 0;

                unsigned char comment[31];
                f.seekg(length + 95);
                f.read(comment, 30);
                comment[30] = 0;

                char g;
                f.seekg(length + 125);
                f.read(g, 1);


                MP3 song = new MP3(title, artist, album, year, comment, g);
                songs.push_back(song);
            }
            f.close();


         string current_file = it->path().string();
                     cout << current_file << endl;
            songs.push_back((*it));
        }
    }

    return songs;
}

list<MP3> Database::search_title(string _title){

    return songs;
}

list<MP3> Database::search_artist(string _artist){

    return songs;
}

list<MP3> Database::search_album(string _album){

    return songs;
}

list<MP3> Database::search_year(int year){

    return songs;
}

void Database::show_all(){

}
