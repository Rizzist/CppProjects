#include <iostream>
using namespace std;
int main() {
    int dol {100};
    int q {25};
    int d {10};
    int n {5};
    int p {1};
    
    cout << "Enter how many pennies: ";
    int pennies {0};
    cin >> pennies;
    
    int dols = pennies/dol;
    int quartz = (pennies-dols*dol)/q;
    int dimes = (pennies-dols*dol-quartz*q)/d;
    int nickel = (pennies-dols*dol-quartz*q-dimes*d)/n;
    int pens = (pennies-dols*dol-quartz*q-dimes*d-nickel*n);
    
    cout << "Dollars: " << dols << endl;
    cout << "Quartz: " << quartz << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickel: " << nickel << endl;
    cout << "Pens: " << pens << endl;
    
    return 0;
}