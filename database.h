#ifndef DATABASE_H
#define DATABASE_H
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>
#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include "mp3.h"
using namespace std;
using namespace boost::filesystem;

class Database { 

    public:
        Database();
        list<MP3>  read(string directory);
        list<MP3> search_title(string _title);
        list<MP3> search_artist(string _artist);
        list<MP3> search_album(string _album);
        list<MP3> search_year(int _year);
        void show_all();

    private:
        list<MP3> songs;


};
#endif
