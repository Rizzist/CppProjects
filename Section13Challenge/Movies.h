#pragma once
#include <string>
#include <vector>
#include <Movie.h>
class Movies
{
public:
    std::vector<Movie> list;
    Movies();
    ~Movies();
    
    void addMovie(int count, std::string name, std::string rating);
    void addWatch(std::string name);
    void displayMovies();
};

