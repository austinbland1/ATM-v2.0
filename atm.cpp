// Name: Austin Bland
// Program Purpose: ATM Program
// Date: 11-5-2018

#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int pin;
    int password;
    float balance = 1000.00;
    bool again;
    float withdraw;
    float deposit;
    int option;

        while(again == true)
        {
            cout << "Enter your PIN: " << endl;
            cin >> pin;

            cout << "Enter your Password: " << endl;
            cin >> password;

            cout << "Welcome to ATM Service \n";
            cout << "1. Check Balance \n";
            cout << "2. Withdraw Cash \n";
            cout << "3. Desposit Cash \n";
            cout << "4. Quit \n";
            cout << "Enter option: "

            cin >> option;
            switch(option)
            {
            case 1: cout << "Your balance is $" << balance << ".\n";
            break;

            case 2: cout << "Enter the amount to withdraw. \n";
            cin >> withdraw;
            balance = balance - withdraw;
            cout << "You have withdrawn $" << withdraw << ".\n";
            break;

            case 3: cout << "Enter the amount to deposit \n";
            cin >> deposit;
            balance = balance + deposit;
            cout << "Your balance is $" << balance << ".\n";
            break;

            case 4: cout << "Thank you for using ATM.\n";
            break;

            default: cout << "INVALID CHOICE.\n";
            break;
            }

            cout << "Do you have another transaction? \n";
            cin >> again;


        }
        return 0;
    }    
}