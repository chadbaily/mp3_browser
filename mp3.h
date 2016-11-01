#ifndef MP3_H
#define MP3_H
#include <string>
#include <iostream>
#include <list>
using namespace std;

class MP3 {

    public:
        MP3(unsigned char _title[], unsigned char _artist[], unsigned char _album[], unsigned char _year[], unsigned char _comment[], char _genre);
        string getTitle();
        string getAlbum();
        string getArtist();
        string getComment();
        char getGenre();
        void printSong();
        int getYear();

    private:
        string artist;
        string title;
        string album;
        string comment;
        char genre;
        int year;

};
#endif
