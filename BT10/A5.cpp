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
    
    return 0;

}
