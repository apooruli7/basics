#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::cout<<"hello world"<<endl;

    int myInt;
    myInt = 15;
    cout << myInt << endl; // prints myInt value
    
    double myNum = 3.14;
    cout << myNum << endl;

    char singleChar = 'a';
    cout << singleChar << endl;

    string myName = "john";
    cout << myName << endl;
    cout << "hello " << myName << endl;
    
    bool isRaining = false;
    cout << isRaining << endl;
    cout << boolalpha << isRaining << endl; // this prints out true or false instead of 1 and 0

    cout << "--------------------------------------------" << endl;
    int a = 10;
    int b = 3;
    int sum = a + b;
    cout << "Sum: " << sum << endl;

    int sub = a - b;
    cout << "Sub: " << sub << endl;

    int product = a * b;
    cout << "Product: " << product << endl;

    int quotient = a / b;
    cout << "Quotient: " << quotient << endl;

    int remainder = a % b;
    cout << "Remainder " << remainder << endl;

    return 0;
}

