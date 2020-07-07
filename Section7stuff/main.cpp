#include <iostream>
using namespace std;
int main() {
    int test_scores [5] {100, 95, 90, 88, 85};
    int winners [30] {0};
    int multi [2][3] {
        {1, 2}, 
        {3, 4}, 
        {5, 6}
    };
    cout << "cool" << endl;
    cout << test_scores[0] << endl;
    cin >> test_scores [0];
    test_scores [0] = 20;
    cout << test_scores[0] << endl;
    return 0;
}