#include <iostream>

using namespace std;

int main ()
{
    // variables
    int moneyTypes [2][5] = {{10, 20, 50, 100, 200}, {10, 20, 50, 100, 200}}; // arrary two dimensions
    int number, pin; // for app numbers
    int admin;
    double balance, withDraw, deposit; // money
    char yes_no; // for app

    // variables = to data
    balance = 10000;
    deposit = 0;
    withDraw = 0;
    yes_no = 'n';
    admin = 123456789;

    //money types array by two dimentions
    //moneyTypes = ;

    // welcome to the atm
    cout << "\n\n";
    cout << "\t----------------------welcome to the atm-----------------------\n\n\n";
    
    // check the password
   // do loop to check the pin
    cout << "Enter the pin code: ";
    cin >> pin;

    if (pin == 1234)
    {
        do
        {           
            cout << "The pin code is correct\n";
            system("cls");  // new window

            // print out the list menu
            cout << "1: view the balance.\t\t\t"
                << "2: Debosit money.\n"
                << "3: withdraw the money.\t\t\t"
                << "4: take the card.\n\n";

            // prompet to choose from the menu
            cout << "Enter the number of the process: ";
            cin >> number;

            // switch cases
            switch (number)
            {
                case 1:
                    // view balance
                    system("cls");
                    cout << "The balance for the card is " << balance << endl;
                    break;

                case 2:
                    // debosit money
                    system("cls");
                    cout << "Enter the debosit value: ";
                    cin >> deposit;

                    // balance will be over written
                    balance = balance + deposit;

                    // print out the balance
                    cout << "The balance of your accout is: " << balance << endl;
                    break;

                case 3:
                    // withdraw the money
                    system ("cls");
                    cout << "Enter the value of the withdraw: ";
                    cin >> withDraw;

                    // balance will be over written
                    balance = balance - withDraw;

                    // print out the balance
                    cout << "The balance of your accout is: " << balance << endl;
                    break;

                case 4:
                    system("cls");
                    cout << "thank you for banking with us.\n";
                    cout << "please take the card." << endl;
                    break;
                default:
                    cout << "there is an error in the process please try again later.";
                    system("pause");
                    system("cls");
                    main();
                    break;                   
            } // for the switch

            cout << "would you like to do another process\n";
            cout << "'y' for yes , 'n' for no\n";
            cout << "Enter: ";
            cin >> yes_no;

        } while(yes_no == 'y');    
    } // for the if
    else if (pin == 123456789)
        {
            // for admins part
            cout << "welcome admin.\n";
            system("pause");
            system("cls");
            cout << "1: view the total balance in the ATM."
                 << "\t\t\t2: return to the main software.\n";
            cout << "Enter the number: ";
            cin >> number;
            switch (number)
            {
            case 1:
                // view the total balance inside the machine
                cout << "The total balance inside the ATM is " << moneyTypes[2][5];
                system("pause");
                system("cls");
                main();
                break;
            case 2:
                // get to the main page
                system("cls");
                main();     
                break;
            default:
                cout << "There is an error.";
                system("pause");
                system("cls");
                main();
                break;
            }     
        }
    else
    {    
        cout << "Wrong pin.\n";
        system("cls");
        cout << "would you like to take the card or try again ? \n";
        cout << "1: try again\t\t"
                << "2: take the card\n";
        cout << "enter the number: ";
        cin >> number;


        if (number == 1)
        {
            system("cls");
            main();
        }     
        else if ( number == 2)
        {
            cout << "thank you for banking with us\n";
            cout << "take the card\n";
        }
        else 
        {
            cout << "there is an error\n";
            cout << "take the card" << endl;
        }
    } // for else

    return 0;
}