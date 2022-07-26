#include <iostream>
using namespace std;

int main () 
{
    int myNums[2][3] { // [row][column]
        {1, 2, 3},
        {4, 5, 6}

    }; // 2 x 3

    cout << myNums[0][2] << endl;

    myNums[1][0] = 14;

    cout << myNums[1][0] << endl;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << myNums[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl << endl;
    
    for(int row = 1; row >= 0; row--) {
        for(int col = 2; col >= 0; col--) {
            cout << myNums[row][col] << " ";
        }
        cout << endl;
    }

    return 0;

}