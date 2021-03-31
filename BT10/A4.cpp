#include <iostream>

using namespace std;

struct Point
{
    double x, y;
    Point (double _x, double _y) {
        x = _x;
        y = _y;
    }
    
    ~Point() {
        
    }
    
    void print (const Point pnt){
        cout << pnt.x << "," << pnt.y << endl;
    }
    
};

int main() {
    
    Point pnt(11,4);
    
    print(pnt);
    
    cout << &pnt << endl; //in ra dia chi cua pnt
    
    cout << &(ptn.x) << endl; //in ra dia chi cua toa do x
    
    cout << &(ptn.y) << endl;  //in ra dia chi cua toa do y
    
    return 0;
    
}
