#include <iostream>

#include <string>

using namespace std;

void f(int a[]) {
    cout << &a[0] << endl;
}
int main() {
    
    int a[30];
    for (int i = 0; i < 30; i++) {
        cout << a[i] << " ";
    }
    cout << a << endl;
    cout << &a[0] << endl;
    f(a);
    return 0;
    
}
