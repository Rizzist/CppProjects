#include "Movie.h"
#include <string>

Movie::Movie(int watches, std::string name, std::string rating)
{
    this->watches = watches;
    this->name = name;
    this->rating = rating;
}

Movie::~Movie()
{
}

