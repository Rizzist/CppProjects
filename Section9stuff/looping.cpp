#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int main() {
/*    for (int q{1}, j{5}; q <= 5; q++, j+=2) {
        cout << q << " * " << j << " : " << (q*j) << endl;
    }
    
    vector <int> nums {10, 20, 30, 40, 50};
    for (unsigned i{0}; i<nums.size(); i++)
        cout << nums[i] << endl;
        
    char scores[] {'s', 't', 'a'};
    for (auto score : scores) {
        cout << score << endl;
    }
    
    for (auto c : "jonny") {
        cout << c << endl;
    }*/
    
    /*int q {0};
    while (q <= 8) {
        cout << q << endl;
        q++;
    }*/
    
    /*int num{0};
    while (num <= 1 || num >= 5) {
        cout << "Enter a num b/w 1 and 5: ";
        cin >> num;
    }
    cout << num;*/
    
   /* int num{};
    do {
        cout << "Enter an int b/w 1 & 5: ";
        cin >> num;
    } while (num <= 1 || num>= 5);
    cout << "Thanks" << endl;
    */
    
    /*vector<int> values {1, 2, -1, 3, -1, 24, -99, 4, 3};
    for (auto val: values) {
        if (val == -99) {
            break;
        } else if (val == -1) {
            continue;
        } else {
            cout << val << endl;
        }
    }*/
    /*int w = 0;
    while(true) {
        w += 1;
        if (w % 91232131 ==0) {
            break;
        }
    }
    for (;;) {
        w -= 1;
        if (w%900000 == 0) {
            break;
        }
    }
    cout << w << endl;*/
    
    /*for (int num1 {1}; num1 <= 10; num1++) {
        for (int num2 {1}; num2 <= 10; num2++){
            cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
        }
        cout << "-------------" << endl;
    }*/
    
    /*int ni{};
    cout << "How many data items do you have? ";
    cin >> ni;
    vector<int> data {};
    
    for (int i{1}; i<=ni; i++) {
        int p{};
        cout << "Enter data item " << i << ": ";
        cin >> p;
        data.push_back(p);
    }
    for (auto val: data) {
        cout << val << endl;
    }*/
    
    int a{2};
    int b{1};
    cout << static_cast<double>(b)/a << endl;
    
    return 0;
}