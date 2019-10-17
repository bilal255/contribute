//Basic Addition
//This program give the sum of two integer values
#include <iostream>
using namespace std;
int main()
{
    //a & b are the input variables
    //sum stores and shows the output of variables
    int a, b, sum;
    cout << "Enter the two numbers you want to add: ";
    cin >> a >> b;
    sum = (a + b);
    cout << "The addition of " << a << " and " << b << "are: " << sum;

    return 0;
}
#pragma once
