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
            string cur_path = p2.string();
            ifstream f(cur_path.c_str(), ios::in | ios::binary);
            if(f.is_open())
            {
                char title[31];
                streampos filelength = file_size(p2) - 125L;
                f.seekg(filelength);
                f.read(title, 30);
                title[30] = 0;

                char artist[31];
                f.seekg(filelength+30L);
                f.read(artist, 30);
                artist[30] = 0;

                char album[31];
                f.seekg(filelength+60L);
                f.read(album, 30);
                album[30] = 0;

                char year[5];
                f.seekg(filelength + 90L);
                f.read(year, 5);
                year[4] = 0;

                char comment[31];
                f.seekg(filelength + 95L);
                f.read(comment, 30);
                comment[30] = 0;

                char g;
                f.seekg(filelength + 125L);
                f.read(&g, 1);

                MP3* song = new MP3((const char*)title, (const char*)artist, (const char*)album, (const char*)year, (const char*)comment, g);

                songs.push_back(song);
            }
            f.close();
           // string current_file = it->path().string();
           //cout << current_file << endl;
        }
    }

    return songs;
}

vector<MP3*> Database::search_title(string _title){
     vector<MP3*> song;
    for(unsigned int i = 0; i < songs.size(); i++)
    {
        if(songs[i]->getTitle() == _title)
        {
            song.push_back(songs[i]);
        }
    }
    return song;
}

vector<MP3*> Database::search_artist(string _artist){
    vector<MP3*> song;
    for(unsigned int i = 0; i < songs.size(); i++)
    {
        if(songs[i]->getArtist() == _artist)
        {
            song.push_back(songs[i]);
        }
    }
    return song;
}

vector<MP3*> Database::search_album(string _album){
    vector<MP3*> song;
    for(unsigned int i = 0; i < songs.size(); i++)
    {
        if(songs[i]->getAlbum() == _album)
        {
            song.push_back(songs[i]);
        }
    }
    return song;
}

vector<MP3*> Database::search_year(string year){
    vector<MP3*> song;
    for(unsigned int i = 0; i < songs.size(); i++)
    {
        if(songs[i]->getYear() == year)
        {
            song.push_back(songs[i]);
        }
    }
    return song;
}

void Database::show_all(){
    for(unsigned int i = 0; i < songs.size(); i++)
    {
         songs[i]->printSong();
    }
}

Database::~Database(){
    for(unsigned int i =0; i < songs.size(); i++)
    {
        delete songs[i];
    }
}
