#include <iostream>
#include <string>
#include <vector>
#include <Movie.h>
#include <Movies.h>


using namespace std;
int main() {
    Movies w;
    w.displayMovies();
    w.addMovie(2, "Frozen", "PG");
    w.displayMovies();
    w.addWatch("Frozen");
    cout << " " << endl;
    w.displayMovies();
    w.addMovie(3, "Frozen", "PG");
    w.addMovie(81, "Dark Top", "PG");
    cout << " " << endl;
    w.addWatch("Dark Top");
    w.displayMovies();
    return 0;
}