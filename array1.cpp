#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    array<int, 5> myIntArray{0, 0, 0, 0, 0}; // makes am array of ints size 5  
    

    for (int a : myIntArray) { // prints each index of the array another way of writing for loop
        cout << a << endl;
    }
    return 0;
}