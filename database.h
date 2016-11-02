#ifndef DATABASE_H
#define DATABASE_H
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "mp3.h"
using namespace std;
using namespace boost::filesystem;

class Database { 

    public:
        Database();
        vector<MP3*>  read(string directory);
        void search_title(string _title);
        void search_artist(string _artist);
        void search_album(string _album);
        void search_year(string _year);
        void show_all();
        ~Database();

    private:
        vector<MP3*> songs;


};
#endif
