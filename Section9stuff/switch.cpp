#include <iostream>
using namespace std;

int main() {
    char l {};
    cout << "Enter expected grade: ";
    cin >> l;
    switch(l){
        case ('a'): case('A'): cout<<"You need 80-100" << endl; break;
        case ('b'): case('B'): cout<<"You need 70-80" << endl; break;
        case ('c'): case('C'): cout<<"You need 60-70" << endl; break;
        case ('d'): case('D'): cout<<"You need 50-60" << endl; break;
        case ('f'): case('F'):
        {
            char confirm {};
            cout << "Are you sure? (Y/N)" <<endl;
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y') {
                cout << "ok guess u didnt study";
            } else {
                cout << "good go study!";
            }
            break;
        } 
        default: cout << "Sorry not valid grade" << endl;
    }
    
    cout << endl;
    return 0;
}