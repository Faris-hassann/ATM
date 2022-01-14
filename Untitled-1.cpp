#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// file varibales
ifstream file_read;
ofstream file_write;

// global varibales
double balance;
string password;
string read_balance, write_balance;
int money_types[3] = {50, 100, 200};

// functions
void view_balance();
double with_draw();
double deposit();
void over_write_on_balance();
void change_password();
void money_divider();
void over_write_on_password();
void generate_password();

int main()
{
    // change color
    system("color a");

    // variables
    string read;
    int letter;
    char cheacker = 'n';

    // open the file
    file_read.open("passwor.txt");

    if(file_read)
    {
        // assign password in read variable
        file_read >> read;

        // close file
        file_read.close();
            
        // main program
        for(int j = 0; j < 3; j++)
        {
            // clear the terminal
            system("cls");

            // prompet to welcome the user
            cout << "-----------------------------------------------------------------" << endl;
            cout << "-----------------------| welcome to the ATM |--------------------" << endl;
            cout << "-----------------------------------------------------------------\n\n" << endl;

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
                        system("cls");

                        // prompet to interdouce whats in 
                        cout << "1: view balacnce\t\t\t\t"
                            << "2: withdraw\n"
                            << "3: Deposit\t\t\t\t"
                            << "4: change password\n"
                            << "5: return the card\n\n";     


                        cout << "enter the process: ";
                        cin >> letter;

                        if(letter < 6 && letter > 0)
                        {
                            switch (letter)
                            {
                                case 1:
                                    view_balance();
                                    cout << "your balance is: " << balance << endl;
                                break;

                                case 2:
                                    cout << with_draw() << endl;
                                    system("pause");
                                    over_write_on_balance();
                                break;

                                case 3:
                                    cout << deposit() << endl;
                                    system("pause");
                                    over_write_on_balance();
                                break;

                                case 4:
                                    change_password();
                                break;

                                default:
                                    cout << "take the card" << endl;
                                    system("pause");
                                    cheacker = 'n';
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
    }

    else
    {
        cout << "couldn't read the card\n Please Try again" << endl;
    }
    
    return 0;
}

void view_balance()
{
    system("cls");
    // open file
    file_read.open("balance.txt");
        
    if(file_read)
    {
        //assign value
        file_read >> read_balance;

        // close file
        file_read.close();

        // change from string to double
        balance = stod(read_balance);
    }
    else
        cout << "couldn't read the card\n please try again later" << endl;
}

double with_draw()
{
    //variables
    char letter;
    double withDraw;

    // withdraw the money
    system ("cls");

    // read the balance
    view_balance();

    // prompet to get the number on the atm
    cout << "1: 50\t\t\t"
         << "2: 100\n\n"
         << "3: 200\t\t\t"
         << "4: 500\n\n"
         << "5: 1000\t\t\t"
         << "6: 5000\n\n"
         << "7: others\n\n";

    cout << "Enter the value of the withdraw: ";
    cin >> letter;

    switch (letter)
    {
        case '1':
            if (balance >= 50)
            {
                balance = balance - 50;
                money_divider();
                cout << "please take the money " << endl;
            }
                
            else
                cout << "your balance isn't enough" << endl;    
            break;
        
        case '2':
            if (balance >= 100)
            {
                balance = balance - 100;
                money_divider();
                cout << "please take the money " << endl;
            }
                
            else
                cout << "your balance isn't enough" << endl;    
            break;

        case '3':
            if (balance >= 200)
            {
                balance = balance - 200;
                money_divider();       
                cout << "please take the money " << endl;
            }
                
            else
                cout << "your balance isn't enough" << endl;    
            break;

        case '4':
            if (balance >= 500)
            {
                balance = balance - 500;
                money_divider();
                cout << "please take the money " << endl;
            }
                
            else
                cout << "your balance isn't enough" << endl;    
            break;


        case '5':
            if (balance >= 1000)
            {
                balance = balance - 1000;
                money_divider();
                cout << "please take the money " << endl;
            }
                
            else
                cout << "your balance isn't enough" << endl;    
            break;

        case '6':
            if (balance >= 5000)
            {
                balance = balance - 5000;
                money_divider();  
                cout << "please take the money " << endl;
            }
                
            else
                cout << "your balance isn't enough" << endl;    
            break;

        case '7':
            cout << "Enter the withdraw value: ";
            cin >> withDraw;


            if (balance >= withDraw)
            {
                balance = balance - withDraw;
                money_divider();
                cout << "please take the money " << endl;
            }
                
            else
                cout << "your balance isn't enough" << endl;     
            break;

        default:
            cout << "Enter the money you want to with draw: ";
            cin >> withDraw;

            balance = balance - withDraw;

            // checker for the money
            money_divider();

            cout << "please take the money " << endl;
            break;
    }

    return balance;
}

void money_divider()
{
    int x;
    int counter = 0;
    int balance = x;
    int *ptr;

    while(balance >= 200 && balance != 0)
    {
        balance -= 200;
        counter++;
    }
    if(balance == 150)
    {
        ptr = new int [counter+2];
        for(int i=0;i<counter;i++)
        {
            ptr[i] = 200;
        }
        ptr[counter] = 100;
        ptr[counter+1] = 50;
    }
    else if(balance == 100)
    {
        ptr = new int [counter+1];
        for(int i=0;i<counter;i++)
        {
            ptr[i] = 200;
        }
        ptr[counter] = 100;
    }
    else if(balance == 50)
    {
        ptr = new int [counter+1];
        for(int i=0;i<counter;i++)
        {
            ptr[i] = 200;
        }
        ptr[counter] = 50;
    }
    else
    {
        ptr = new int [counter];
        for(int i=0;i<counter;i++)
        {
            ptr[i] = 200;
        }
    }
}

double deposit()
{
    //variables
    double DEPOSIT;

    // read the balance
    view_balance();

    // clear terminal
    system("cls");

    cout << "Enter the debosit value: ";
    cin >> DEPOSIT;

    // balance will be over written
    balance = balance + DEPOSIT;

    return balance;
}

void over_write_on_balance()
{
    write_balance = to_string(balance);

    // open the file
    file_write.open("balance.txt");

    //program
    file_write << write_balance << endl;
    
    // close the file
    file_write.close();

    view_balance();
}

void change_password()
{
    system("cls");

    // varbales
    char process;
    string new_password, file_password;
    int counter = 0;

    // menu driven
    cout << "1: change password manually\t\t\t"
         << "2: generate a new password\n\n";

    // prompet to enter the process
    cout << "Enter the process: ";
    cin >> process;

    switch (process)
    {
        case '1':
            cout << "Enter the new password: ";
            cin >> password;

            system("pause");

            system("cls");

            do
            {
                system("cls");

                cout << "confirm password: ";
                cin >> new_password;

                if(new_password == password)
                {
                    cout << "it has been changed" << endl;
                    over_write_on_password();
                    cout << "your new password: " << password << endl;
                    counter = 5;
                }
                else
                {
                    cout << "it didn't change" << endl;
                    counter++;
                    system("pause");
                }
                    
            } while (counter <= 3);
            break;
        
        default:
            generate_password();
            break;
    }     
}

void over_write_on_password()
{
    // open the file
    file_write.open("password.txt");

    //program
    file_write << password << endl;
    
    // close the file
    file_write.close();
}

void generate_password()
{
    // varibales
    int random[4];
    string new_password;
    int counter = 0;
    char choose;

    for(int i = 0; i < 4; i++)
    {
        random[i] = rand() % (9 - 1 + 1) + 1;
    }
    
    for(int j = 0; j < 4; j++)
    {
        cout << random[j];
    }

    cout << "\n";

    cout << "1: make password manually\t\t\t"
         << "2: make another password\n\n"
         << "3: take this password\n\n";


    cout << "enter the process: ";
    cin >> choose;

    switch (choose)
    {
        case '1':
            change_password();
        break;

        case '2':
            generate_password();
        break;

        default:
            cout << "Enter the new password: ";
            cin >> password;

            system("pause");

            do
            {
                system("cls");

                cout << "confirm password: ";
                cin >> new_password;

                if(new_password == password)
                {
                    cout << "it has been changed" << endl;
                    over_write_on_password();
                    cout << "your new password: " << password << endl;
                    counter = 5;
                }
                else
                {
                    cout << "it didn't change" << endl;
                    counter++;
                    system("pause");
                }
                    
            } while (counter <= 3);

            over_write_on_password();
        break;    
    }    
}