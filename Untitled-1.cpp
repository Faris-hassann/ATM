#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

// file varibales
ifstream file_read;
ofstream file_write;

// global varibales
string read;

// functions
void Password();


int main()
{
    // variables
    string password, pin;
    int letter;
    char cheacker = 'n';

    Password();

    cout << read << endl;

    pin = read;

    cout << pin << endl;

    for(int j = 0; j < 3; j++)
    {
        // clear the terminal
        system("cls");

        // prompet for the password
        cout << "Enter the password: ";
        cin >> password;

        if(password == read)
        {
            j = 5;
            // to count on the process three times
            for(int i = 0; i < 3; i++)
            {
                // clear the termainl
                system("cls");
                
                do
                {
                    // prompet to interdouce whats in 
                    cout << "1: view balacnce\t\t\t\t"
                        << "2: withdraw\n"
                        << "3: Deposit\t\t\t\t"
                        << "4: change password\n"
                        << "5: return the card\n\n";

                    cout << "enter the process: ";    

                    // enter a number less than 6 and greater than 0
                    cin >> letter;

                    if(letter < 6 && letter > 0)
                    {
                        switch (letter)
                        {
                            case 1:
                                cout << "view balance";
                            break;

                            case 2:
                                cout << "with draw";
                            break;

                            case 3:
                                cout << "deposit";
                            break;

                            case 4:
                                cout << "change_password";
                            break;

                            default:
                                cout << "take the card" << endl;
                                system("pause");
                                // return the card
                            break;
                        }

                        cout << "would you like to make another process: ";
                        cin >> cheacker;

                        // to get out from the loop 
                        i = 5;
                    }
                    else
                    {
                        // entered a wrong process number
                        system("cls");
                        cout << "enter a valid number enter a value from 1 to 5" << endl;
                        system("pause");
                    }    
                    
                } while (cheacker == 'y' || cheacker == 'Y');
                

                if (i == 2)
                    cout << "take the card" << endl;

            }

        }
        else
        {
            // entered a wrong password
            cout << "you entered a wrong password" << endl;
            cout << "please try again" << endl;
            system("pause");
        }

        if(j == 2)
            // the user entered a wrong password for 3 times
            cout << "take the card" << endl;
    }
    
    return 0;
}

void Password()
{
    // open the file
    file_read.open("password.txt");

    // assign password in read variable
    while(file_read >> read)
    {
        cout << read << endl;
    }

    // close file
    file_read.close();
}