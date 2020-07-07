#include <iostream>
using namespace std;
int main() {
    int num {0};
    const int min {10};
    const int max {100};
    
    cout << "Enter num b/w " << min << " and " << max << ": ";
    cin >> num;
    
    if (num >= min) {
        cout << "greater than " << min << endl;
    }
    if (num <= max) {
        cout << "less than " << max << endl;
    }
    if (num >= min && num <= max) {
        cout << "between " << min << " and " << max << endl;
    }
    if (num==min || num==max) {
        cout << "is on ends" << endl;
    }
    
    
    cout << endl;
    return 0;
}