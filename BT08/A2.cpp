#include <iostream>
using namespace std;
//a.
int main( )
{
    char a[] = "abcd";
    for (char *cp = a; *cp != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
    }
    return 0;
}

//b.
int main( )
{
    int a[8] = {1,2,3,4,5,6,7,8}
    for (int *cp = a; *cp < (a+8); cp++) {
        cout << cp << " : " << *cp << endl;
    }
    return 0;
}

//c.
int main( )
{
    double a[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    for (double *cp = a; *cp < (a+5); cp++) {
      cout << cp << " : " << *cp << endl;
    }
    return 0;
}

//d.
int main( )
{
    double a[3] = {1.0, 2.0, 3.0, 4.0, 5.0};
    for (double *cp = a; *cp < (a+5); cp+=2) {
      cout << cp << " : " << *cp << endl;
    }
    return 0;
}


