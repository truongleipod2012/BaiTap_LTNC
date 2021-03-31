#include <iostream>

using namespace std;

struct Point {
    
    double x, y;
    Point (double _x, double _y) {
        x = _x;
        y = _y;
    }
    
    ~Point() {
        
    }

    void thamtri(Point pnt) {
        cout << &pnt << endl;
    }

    void thambien(Point &pnt) {
        cout << &pnt << endl;
    }
    
};

int main() {
    
    Point pnt(11,4);
    
    thambien(pnt);
    
    thamtri(pnt);
    
    return 0;
    
}
