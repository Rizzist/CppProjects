#include <iostream>
using namespace std;
int main() {
    int num1 {10};
    int num2 {10};
    
    num2 = num1 = 100;
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    const double usd_per_eur {1.19};
    cout << "enter eur, get usd: ";
    
    double euros {0.0};
    double dollars {0.0};
    //cin >> euros;
    dollars = euros*usd_per_eur;
    cout << "you have " << dollars << " Dollars";
    
    int counter {10};
    counter++;
    cout << counter;
    return 0;
}