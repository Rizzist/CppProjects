#include <iostream>
using namespace std;


int *apply_all(int arr1[], size_t n1, int arr2[], size_t n2);
void print(int arr1[], size_t n); 

int main() {
    int arr1[] {1, 2, 3, 4, 5};
    int arr2[] {10, 20, 30};
    
    cout << "Array 1: ";
    print(arr1, 5);
    
    cout << "Array 2: ";
    print(arr2, 3);
    
    int *result = apply_all(arr1, 5, arr2, 3);
    cout << "Result ";
    print(result, 15);
    
    delete [] result;
    
    return 0;
}

void print(int arr1[], size_t n) {
    for (int i = 0; i < n; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int *apply_all(int arr1[], size_t n1, int arr2[], size_t n2) {
    int *result {nullptr};
    result = new int[n1*n2];
    int w {0};
    for (int i = 0; i < n1; i++){
        for (int j = 0; j < n2; j++){
            *(result+w) = arr1[i] * arr2[j];
            w += 1;
        }
    }
    return result;
}