#include <string>
#include <iostream>
#include <string>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>
#include "mp3.h"
#include "database.h"
using namespace boost::filesystem;
using namespace std;

int main()
{

    Database * r = new Database();

    r->read("./songs/");

    r->show_all();    
    return 0;
}
