#include <iostream>
#include <array>
using namespace std;

int main ()
{
    array<int, 5> myInts;
    for(int i = 0; i < 5; i++) {
        cout << "Enter an Integer" << endl;
        cin >> myInts[i];
    }
    cout << "Now Double the Amount" << endl;
    for(int num : myInts) {
        cout  << num * 2 << endl;
        }
    
    return 0;
}