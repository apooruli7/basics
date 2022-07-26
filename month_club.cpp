#include <iostream>
using namespace std;

int main()
{

    char whichPackage;
    int howManyJams = 0;
    int monthlyFee = 0;
    int jamsIncluded = 0;
    int jamPrice = 0;
    int total;

    cout << "What package do you own? A, B, or C" << endl;
    cin >> whichPackage;

    cout << "How many jams, jellies, or preserves did you purchase this month?" << endl;
    cin >> howManyJams;

    // defualt values
    if (whichPackage == 'A') {
        monthlyFee = 8;
        jamsIncluded = 2;
        jamPrice = 5;

    }
    else if (whichPackage == 'B') {
        monthlyFee = 12;
        jamsIncluded = 4;
        jamPrice = 4;

    }
    else if (whichPackage == 'C') {
        monthlyFee = 15;
        jamsIncluded = 6;
        jamPrice = 3;

    }
    else {
        cout << "Selection out of range" << endl;
    }

    // total cost
    if(howManyJams <= jamsIncluded) {
        total = monthlyFee;
    }
    else {
        total = monthlyFee + ((howManyJams - jamsIncluded) * jamPrice);

    }
    cout << "Owe $" << total << endl;
    return 0;
}
