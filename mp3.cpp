#include "mp3.h"
#include <string>
#include <stdlib.h>
using namespace std;

MP3::MP3(unsigned char _title[],unsigned char _artist[],unsigned char _album[], unsigned char _year[], unsigned char _comment[], unsigned char _genre[]){
    title =  _title;
    artist = _artist;
    album = _album;
    year = _year;
    comment = _comment;
    genre = _genre;
}

unsigned char* MP3::getTitle(){
    return title;
}

unsigned char* MP3::getAlbum(){
    return album;
}

unsigned char* MP3::getArtist(){
    return artist;
}

unsigned char* MP3::getComment(){
    return comment;
}

unsigned char* MP3::getYear(){
    return year;
}

unsigned char* MP3::getGenre(){
    return genre;
}

void MP3::printSong(){
    cout << artist << " - " << title << " (" << album << ", " << year << ") [" << comment << "] " << genre;
}
