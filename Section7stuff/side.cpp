#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <char> v {'a','e','i','o','u'};
    vector <int> tests (10);
    vector <int> temp {10, 5};
    cout << temp[0]  << endl;
    temp.push_back(50);
    cout << temp[2] << endl;
    
    vector <vector<int>> bro {
        {1, 2, 3, 4},
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}
    };
    cout << bro[0][3];
    return 0;
}