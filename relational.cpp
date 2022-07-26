#include <iostream>
using namespace std;

/*

    > greater tha
    >= greater than or equal to
    < less than
    <= less than or equal to
    == equals each other
    != not equal to
*/

int main()
{
    cout << boolalpha;

    int a = 15;
    int b = 20;
    bool areEqual = a == b;

    cout << (a < b) << endl;
    cout << areEqual << endl;

    bool isRaining = true;
    bool isWarm = true;
    cout << "And: " << (isRaining && isWarm) << endl;
    cout << "Or: " << (isRaining || isWarm) << endl;
    cout << "Not: " << (!isRaining) << endl;

    return 0;
}