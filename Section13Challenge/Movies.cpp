#include "Movies.h"
#include <string>
#include <vector>
#include <iostream>
Movies::Movies()
{
}

Movies::~Movies()
{
}

void Movies::addMovie(int count, std::string name, std::string rating){
    bool listed {false};
    for(int i = 0; i < list.size(); i++){
        if (list[i].name == name) {
            listed = true;
        }
    }
    if (listed == false){
        list.push_back(Movie(count, name, rating));
    } else {
        std::cout << "Already on file bro" << std::endl;
    }
    
}

void Movies::addWatch(std::string name){
    for(int i = 0; i < list.size(); i++){
        if (list[i].name == name) {
            list[i].watches++;
        }
    }
}

void Movies::displayMovies(){
    for(auto i : list){
        std::cout << i.name << " " << i.watches << std::endl;
    }
}