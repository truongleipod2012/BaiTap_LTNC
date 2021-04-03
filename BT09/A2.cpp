#include <iostream>

using namespace std;

int main() {
    
     int* ptr = new int;
     int* ptr1 = ptr;
     *ptr = 10;
     delete ptr;
     cout << *ptr1;
     delete ptr1;
     return 0;

}
