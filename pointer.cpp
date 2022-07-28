#include <iostream>
using namespace std;

int main ()
{
    int myLoveInt = 150;
    int* somePtr = &myLoveInt;

    cout << "myLoveInt is: " << myLoveInt << endl;
    cout << "pointer hold value: " << somePtr << endl;
    cout << "pointer dereferenced: " << *somePtr << endl;

    *somePtr = 200;
    cout << "myLoveInt is now: " << myLoveInt << endl;

    return 0;
}
