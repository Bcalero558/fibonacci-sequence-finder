// fibbanachii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int fib(int digit) {
    if (digit <= 1)
        return digit;
    return fib(digit - 1) + fib(digit - 2);


}
int main()
{
    int pos;
    int choice;
    cout << "Enter a number to find it in the fibonacci series: ";
    cin >> pos;
    choice = fib(pos);
    cout << "The " << pos << "th term in the fibonacci series is: " << choice<<endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
