#include <iostream>
using namespace std;

void valueChanged1(int someNum);
void valueChanged2(int& someNum);

int main()
{
    int myNum = 20;
    cout << "Before valueChanged1 call, myNum is " << myNum << endl;
    valueChanged1(myNum);
    cout << "After valueChanged, myNum is " << myNum << endl;

    cout << endl << endl;

    cout << "myNum is currently: " << myNum << endl;
    valueChanged2(myNum);
    cout << "After valueChanged2 call, myNum is " << myNum << endl;

    return 0;
}

void valueChanged1(int someNum) {
    someNum = 100;
    cout << "Some num is valueChanged1 is " << someNum << endl;

}

void valueChanged2(int& someNum) {
    someNum = 100;
    cout << "Inside valueChanged2 function, someNum is " << someNum << endl;
}