#include <iostream>

using namespace std;

int main() {
    
    int *ptr;
    int x = 10;
    ptr = &x;
    delete ptr;
    return 0;
    
}

