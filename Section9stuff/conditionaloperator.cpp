#include <iostream>
using namespace std;
int main() {
    int a{10}, b{20};
    int score{92};
    double result1{}, result2{}, result3{};
    
    result1 = (a>b) ? a : b;
    result2 = (a<b) ? (b-a) : (a-b);
    result3 =  (b!=0) ? ((double) a/b) : 0;
    cout << ((score>90)? "Excellent" : "Good") << endl;
    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;
    cout << (float) a/b << endl;
    return 0;
}