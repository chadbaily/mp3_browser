#include "database.h"

Database::Database(){
}

list<MP3> Database::read(string directory){
    path p(directory); 
    for(directory_iterator it(p); it != directory_iterator(); ++it)
    {
        path p2 = it->path();
        if(is_directory(p2))
        {//need to pass in a path variable into the read function
            read(p2.string());
        }

        else if(is_regular_file(p2))
        {
         string current_file = it->path().string();
                     cout << current_file << endl;
        }
    }

    return songs;
}

list<MP3> Database::search_title(string _title){

    return songs;
}

list<MP3> Database::search_artist(string _artist){

    return songs;
}

list<MP3> Database::search_album(string _album){

    return songs;
}

list<MP3> Database::search_year(int year){

    return songs;
}

void Database::show_all(){

}
