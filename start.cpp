//This program does the basic arithmetic operation
//i.e. addition and subtraction
#include <iostream>
void sum(int a, int b)
{
    cout<<a+b;
}
void sub(int a,int b)
{
    cout<<a-b;
}
using namespace std;
int main()
{
    int a, b, sum, sub;
    cout << "Enter the two numbers you want to add: ";
    cin >> a >> b;
    cout << "The addition of " << a << " and " << b << "are: " << sum(a,b);
    system ("cls");
    cout << "Enter the two numbers you want to subtract: ";
    cin >> a >> b;
    cout << "The subtraction of " << a << " and " << b << "are: " << sub(a,b);

    return 0;
}
#pragma once
