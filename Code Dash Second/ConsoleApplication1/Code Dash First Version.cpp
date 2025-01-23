#include <iostream>
using namespace std;


int main()
{
    int choice;
    float balance = 5000, amount;

    do {
        cout << "Welcome to CME ATM" << endl << endl;

        cout << "What would you like to do?" << endl
            << "1. View Balance" << endl
            << "2. Deposit" << endl
            << "3. Withdraw" << endl
            << "0. Exit" << endl
            << "Enter your selection: ";

        cin >> choice;

        switch (choice) {
        case 1: {
            cout << endl << "You have chosen: View Balance" << endl
                << "Your balance is: " << balance << endl;
            system("pause");
            system("cls");
            break;
        }
        case 2: {
            cout << endl << "You have chosen: Deposit" << endl
                << "How much would you like to deposit?" << endl
                << "Enter amount: ";

            cin >> amount;

            if (amount <= 0) {
                cout << "You cannot deposit an amount less than or equal to 0." << endl;
                system("pause");
                system("cls");
                break;
            }

            else if (amount < 5000) {
                cout << "You cannot deposit an amount less than 5000." << endl;
                system("pause");
                system("cls");
                break;
            }

            balance = amount + balance;
            cout << endl << "You have successfully deposited: " << amount << endl
                << "Your new balance is now: " << balance << endl;
            system("pause");
            system("cls");
            break;
        }
        case 3: {
            cout << endl << "You have chosen: Withdraw" << endl
                << "How much would you like to Withdraw?" << endl
                << "Enter amount: ";

            cin >> amount;

            if (amount <= 0) {
                cout << "You cannot withdraw an amount less than or equal to 0." << endl;
                system("pause");
                system("cls");
                break;
            }

            else if (amount < 5000) {
                cout << "You cannot withdraw an amount less than 5000." << endl;
                system("pause");
                system("cls");
                break;
            }

            else if (balance < amount) {
                cout << "You cannot withdraw an amount less than your current balance." << endl;
                system("pause");
                system("cls");
                break;
            }

            balance = balance - amount;
            cout << endl << "You have successfully withdrawn: " << amount << endl
                << "Your new balance is now: " << balance << endl;
            system("pause");
            system("cls");
            break;
        }
        case 0: {
            cout << endl << "Thank you for using our ATM!";
            return 0;
            break;
        }
        default: {
            cout << endl << "Please enter a number that is available in the choices." << endl;
            system("pause");
            system("cls");
        }
        }

    } while (true);

    return 0;
}
