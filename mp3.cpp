#include "mp3.h"

MP3::MP3(char[] _title, char[] _artist, char[] _album, int year, char[] comment, char _genre){
    title = _title;
    artist = _artist;
    album = _album;
    year = _year;
    comment = _comment;
    genre = _genre;
}

char[] MP3::getYear(){
    return year;
}

char[] MP3::getTitle(){
    return title;
}

char[] MP3::getAlbum(){
    return album;
}

char[] MP3::getArtist(){
    return artist;
}

char[] MP3::getComment(){
    return comment;
}

int MP3::getYear()
    return year;
}

char MP3::getGenre(){
    return genre;
}

void MP3::printSong(){
    cout << artist << " - " << title << " (" << album << ", " << year << ") [" << comment << "] " << genre;
}
