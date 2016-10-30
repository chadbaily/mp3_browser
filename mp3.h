#ifndef MP3_H
#define MP3_H
#include <string>
#include <iostream>
#include <list>
using namespace std;

class MP3 {

    public:
        MP3(char[] _title, char[] _artist, char[] _album, int year, char[] _comment, char _genre)
        char[] getYear();
        char[] getTitle();
        char[] getAlbum();
        char[] getArtist();
        int getYear();
        char[] getComment();
        char getGenre();
        void printSong();
    
    private:
        char[] artist;
        char[] title;
        char[] album;
        char[] comment;
        char genre;
        int year;

};
#endif
