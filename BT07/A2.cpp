//
//  A2.cpp
//  
//
//  Created by Truongle on 10/03/2021.
//
#include <iostream>

using namespace std;

int A[10];

void f(int *A) {
    for (int i = 0; i <= sizeof(A); i++)
    {
        cout << A[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    f(A);
}
