#include <iostream>
using namespace std;

void printHello();
void printNumber(int a);
int giveMeTen();
int addThese(int num1, int num2);

int main()
{
    int num1 = 120;
    int num2 = 580;
    printHello();
    printNumber(100);

    int someData = giveMeTen();
    cout << someData << endl;

    int totalValue = addThese(num1, num2);
    cout << totalValue << endl;

    return 0; 
}

void printHello()
{
    cout << "Hello there" << endl;
}

void printNumber(int a)
{
    cout << "The number is " << a << endl;
}

int giveMeTen()
{
    return 10;
}

int addThese(int num1, int num2) 
{
    return num1 + num2;
}

