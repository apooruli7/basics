#include <iostream>
#include "rectangle.h"
using namespace std;

int main() 
{
    Rectangle r1;
    Rectangle r2(5.0, 2.0);

    cout << "r1 area is " << r1.area() << endl;
    cout << "r2 area is " << r2.area() << endl;

    r1.setLength(22);
    r2.setLength(12);

    cout << "r1 length is now " << r1.getLength() << endl;
    cout << "r1 width is now " << r1.getWidth() << endl;

    cout << "r1 area is now " << r1.area() << endl;
    return 0; 
}