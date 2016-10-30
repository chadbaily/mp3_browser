#ifndef DIRECTORY_h
#define DIRECTORY_H
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>
#include <iostream>
#include <string>
#include <list>
using namespace std;
using namespace boost::filesystem;

class MP3;

class Directory { 

    public:
        Directory();
        list read();
        list<MP3> search_title(char[] _title);
        list<MP3> search_artist(char[] _artist);
        list<MP3> search_album(char[] _album);
        list<MP3> search_year(int _year);
        list<MP3> show_all();

    private:
        list<MP3> songs;
        string path;


};
#endif
