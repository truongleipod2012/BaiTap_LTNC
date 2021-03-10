//
//  A3.cpp
//  
//
//  Created by Truongle on 10/03/2021.
//
#include <iostream>

using namespace std;

void count_even(int* x, int n) {
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            cout << A[i] << ' ';
        }
    }
}

const int m = 100;

int x[m];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    count_even(A, n);
    return 0;
}
