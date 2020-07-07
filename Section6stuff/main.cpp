#include <iostream>
using namespace std;
int main() {
    int s_room;
    int l_room;
    const int sc {25};
    const int lc {25};
    const float tax {0.13};
    cout << "Estimate for Carpet cleaning service" << endl;
    cout << "Number of small rooms: ";
    cin >> s_room;
    cout << "Numer of large rooms: ";
    cin >> l_room;
    cout << "Cost for small rooms: " << sc << endl;
    cout << "Cost for large rooms: " << lc << endl;
    const float cost = sc * s_room + lc*l_room;
    cout << "Cost: " << cost << endl;
    cout << "Tax: " << cost*0.13 << endl;
    cout << "================================" << endl;
    
    return 0;
}