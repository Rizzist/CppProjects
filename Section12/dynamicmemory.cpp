#include <iostream>
using namespace std;
int main() {
    
    int *ip {nullptr};
    ip = new int;
    cout << ip << endl;
    delete ip;
    
    size_t s{0};
    double *dp {nullptr};
    cout << "How many temps? ";
    cin >> s;
    dp = new double[s];
    cout << dp << endl;
    
    
    int score[] {100, 95, 89, 68};
    int *sp{score};
    for(int i = 0; i < 20; i++) {
        cout << *sp++ << endl;
    }
    delete [] sp;
    return 0;
}