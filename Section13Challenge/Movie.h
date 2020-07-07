#pragma once
#include <string>
class Movie
{
public:
    int watches;
    std::string name;
    std::string rating;
    Movie(int watches, std::string name, std::string rating);
    ~Movie();

};

