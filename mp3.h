#ifndef MP3_H
#define MP3_H
#include <string>
#include <iostream>
#include <list>
using namespace std;

class MP3 {

    public:
        MP3(unsigned char _title[], unsigned char _artist[],  unsigned char _album[],  unsigned char _year[],  unsigned char _comment[], unsigned char _genre[]);
        unsigned char* getTitle();
        unsigned char* getAlbum();
        unsigned char* getArtist();
        unsigned char* getComment();
        unsigned char* getGenre();
        void printSong();
        unsigned char* getYear();

    private:
        unsigned char* artist[];
        unsigned char* title[];
        unsigned char* album[];
        unsigned char* comment[];
        unsigned char* genre[];
        unsigned char* year[];

};
#endif
