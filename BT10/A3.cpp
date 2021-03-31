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
    
    void print (const Point pnt){
        cout << pnt.x << "," << pnt.y << endl;
    }

    Point mid_point (const Point m, const Point n) {
        Point mid;
        mid.x = (m.x + n.x) / 2;
        mid.y = (m.y + n.y) / 2;
        return mid;

        }
    
};

int main() {
    
    Point pnt1(11,4);
    
    Point ptn2(44,8);
    
    Point ptn3 = mid_point(ptn1, ptn2);
    
    print(ptn3);
    
    return 0;
}
