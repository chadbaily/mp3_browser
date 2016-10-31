all: player

player: database.cpp main.cpp mp3.cpp
	g++ -Wall -g -lboost_filesystem -lboost_system -o player database.cpp main.cpp mp3.cpp


clean:
	rm -rf player
