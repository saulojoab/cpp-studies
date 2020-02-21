#include <iostream>
#include <cmath>

using namespace std;

class Circle {
    public:
        Circle (float r) {
            radius = r;
        }
        float getArea () { return 3.14 * pow(radius, 2); };
        float getPerimeter () { return 3.14 * (radius * 2); };
    private:
        float radius;
};

int main () 
{
    Circle circy(11);
    cout << circy.getArea() << endl;

    Circle corcy(4.44);
    cout << corcy.getPerimeter() << endl;
    return 1;
}