#include <iostream>

using namespace std; 

int main () 
{
    int firstNumber, secondNumber, result;
    string process;

    cout << "1: multiplies\n" 
         << "2: divide\n" 
         << "3: addition\n" 
         << "4: subtraction \n";

    cout << "enter the first number: ";
    cin >> firstNumber;

    cout << "enter the number of the process: ";
    cin >> process;

    cout << "enter the second number: ";
    cin >> secondNumber;

    if (process == "*")
    {
        // multipli
        result = firstNumber * secondNumber;
        cout << "the result is " << result;
    }

    else if (process == "/")
    {
        // divide
        result = firstNumber / secondNumber;
        cout << "the result is " << result;
    }

    else if (process == "+")
    {
        // addition
        result = firstNumber + secondNumber;
        cout << "the result is " << result;
    }

    else if (process == "-")
    {
        // subtraction
        result = firstNumber - secondNumber;
        cout << "the result is \a" << result;
    }

    else 
    {
        cout << "\nthere is an error";
    }

    return 0;
}