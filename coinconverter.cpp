#include <iostream> 

using namespace std;

int main() 
{
    // varibales
    float coin, result, egp, yen, euro, number;

    egp = 15.74;
    yen = 113.63;
    euro = 0.86;

    // telling the user the app
    cout << "1: EGP\n"
         << "2: YEN\n"
         << "3: EURO" 
         << endl;

    // taking from the user the number of the convertion
    cout << "please enter the number of the converter: ";
    cin >> number;

    // the program engine
    if (number == 1)
    {
        // taking the amount of money
        cout << "Enter the money in $: ";
        cin >> coin;

        //program
        result = coin * egp;

        // print out the result
        cout << "the result in EGP= " << result;
    }

    else if (number == 2)
    {
        // taking the amount of money
        cout << "Enter the money in $(dollor): ";
        cin >> coin;

        //program
        result = coin * yen;

        // print out the result
        cout << "the result in YEN= " << result;
    }
    else if (number == 3)
    {
        // taking the amount of money
        cout << "Enter the money in $: ";
        cin >> coin;

        //program
        result = coin * euro;

        // print out the result
        cout << "the result in EURO= " << result;
    }
    else 
    {
        cout << "there is an error";
    }

    return 0;
}