#include "mp3.h"
#include <string>
using namespace std;

MP3::MP3(unsigned char _title[], unsigned char _artist[], unsigned char _album[], unsigned char _year[], unsigned char _comment[], char _genre){
    title = string(_title);
    artist = string(_artist);
    album = string(_album);
    year = atoi(_year);
    comment = string(_comment);
    genre = _genre;
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

int MP3::getYear(){
    return year;
}

char MP3::getGenre(){
    return genre;
}

void MP3::printSong(){
    cout << artist << " - " << title << " (" << album << ", " << year << ") [" << comment << "] " << genre;
}
