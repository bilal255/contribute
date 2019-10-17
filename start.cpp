//Basic addition of two integers
//This program gives output the sum of two inputs
#include <iostream>
using namespace std;
int main()
{
    //a & b taken as input from user
    //sum is the variable to store & show the output 
    int a, b, sum;
    cout << "Enter the two numbers you want to add: ";
    cin >> a >> b;
    sum = (a + b);
    cout << "The addition of " << a << " and " << b << "are: " << sum;

    return 0;
}
#pragma once
