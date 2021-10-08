#include <iostream>

using namespace std;

int main() {
    int n = 0 ; // How many numbers do you want to sort?!
    cin >> n ; // Enter count of numbers!

    long numbers[n];

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    //-----------------Insertion Sort----------------------
    for (int k = 1; k < n; k++) {
        long x = numbers[k];
        int i = k - 1 ;
        while(x < numbers[i]){
            numbers[i + 1] = numbers[i];
            i--;
        }
        numbers[i + 1] = x ;
    }
    //-----------------Insertion Sort [END}----------------------
    for (int i = 0; i < n ; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}

