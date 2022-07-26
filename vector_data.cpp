#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<int> myIntVector;
    int input;
    
    cout << "Enter a positive integer to add to the vector, or negative read to quit" << endl;
    cin >> input;
    
    while(input >= 0) {
        myIntVector.push_back(input);
        cout << "Enter a positive integer to add to the vector, or negative read to quit" << endl;
        cin >> input;
    }
    cout << endl;
    cout << "Double Amount" << endl;
    
    for(int num : myIntVector) {
        cout << num * 2 << endl;
    }

    return 0;

}