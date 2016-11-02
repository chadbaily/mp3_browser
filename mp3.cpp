#include "mp3.h"
#include <string>
#include <stdlib.h>
using namespace std;

MP3::MP3(const char _title[], const char _artist[], const char _album[], const char _year[], const char _comment[], const char _genre[]){
    title = string(_title);
    artist = string(_artist);
    album = string(_album);
    year = string(_year);
    comment = string(_comment);
    genre = string(_genre);
}

string MP3::getTitle(){
    return title;
}

string MP3::getAlbum(){
    return album;
}

string MP3::getArtist(){
    return artist;
}

string MP3::getComment(){
    return comment;
}

string MP3::getYear(){
    return year;
}

string MP3::getGenre(){
    return genre;
}

void MP3::printSong(){
    cout << artist << " - " << title << " (" << album << ", " << year << ") [" << comment << "] " << genre;
}
