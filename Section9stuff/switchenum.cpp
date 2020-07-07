#include <iostream>

using namespace std;

int main() {
    enum Direction {
        left, right, upp, downn
    };
    
    Direction heading (up);
    
    switch (heading) {
        case left: cout << "going left" << endl; break;
        case right: cout << "going right" << endl; break;
        case upp: cout << "going up" << endl; break;
        case downn: cout << "going down" << endl; break;
    }
    cout << endl;
    return 0;
}