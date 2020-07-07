#include <iostream>
using namespace std;
int main() {
    int *int_ptr{nullptr};
    int num {10};
    int_ptr = &num;
    cout << num << endl;
    cout << sizeof num << endl;
    cout << &num << endl;
    cout << int_ptr << endl;
    cout << *int_ptr << endl;
    *int_ptr = 11;
    cout << num << endl;
    cout << int_ptr << endl;
    cout << *int_ptr << endl;
    
    int *p {nullptr};
    p = new int;
    cout << p << endl;
    cout << *p << endl;
    *p = 100;
    cout << *p << endl;
    delete p;
    cout << p;
    return 0;
}