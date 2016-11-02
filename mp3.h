#ifndef MP3_H
#define MP3_H
#include <string>
#include <iostream>
#include <list>
using namespace std;

class MP3 {

    public:
        MP3(const char _title[], const char _artist[], const char _album[], const char _year[], const char _comment[], const char* _genre);
        string getTitle();
        string getAlbum();
        string getArtist();
        string getComment();
        string getGenre();
        void printSong();
        string getYear();

    private:
        string artist;
        string title;
        string album;
        string comment;
        string genre;
        string year;

};
#endif
