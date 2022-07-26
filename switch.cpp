#include <iostream>
using namespace std;

int main()
{
    char grade;

    cout << "Please enter an letter grade" << endl;
    cin >> grade;

    switch (grade)
    {
        case 'A':
            cout << "Great Job" << endl;
            break;
        case 'B':
            cout << "Good Job" << endl;
            break;

        case 'C':
            cout << "You can do better" << endl;
            break;
        case 'D':
            cout << "You are almost failing" << endl;
            break;
        case 'F':
            cout << "You are failing bring up your grade" << endl;
            break;
        default:
            cout << "You have entered a invalid grade. Try again!" << endl;
    }
    return 0;
}