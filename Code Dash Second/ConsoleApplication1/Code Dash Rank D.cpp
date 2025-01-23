#include <iostream>
using namespace std;

int main()
{
    int choice, depositCount = 0, withdrawCount = 0, checkBalanceCount = 0;
    float balance = 5000.0;
    bool mainLoop = true;
    void Intro();
    void ATMChoices(int choice, float& balance, bool& mainLoop, int& depositCount, int& withdrawCount, int& checkBalanceCount);

    do {
        Intro();

        cin >> choice;

        ATMChoices(choice, balance, mainLoop, depositCount, withdrawCount, checkBalanceCount);

    } while (mainLoop == true);

    return 0;
}

void Intro() {
    cout << "Welcome to CME ATM" << endl << endl;

    cout << "What would you like to do?" << endl
        << "1. View Balance" << endl
        << "2. Deposit" << endl
        << "3. Withdraw" << endl
        << "0. Exit" << endl
        << "Enter your selection: ";
}

void ATMChoices(int choice, float &balance, bool &mainLoop, int& depositCount, int& withdrawCount, int& checkBalanceCount) {
    float amount;
    void Counter(int& depositCount, int& withdrawCount, int& checkBalanceCount), viewBalance(int &checkBalanceCount), Deposit(int &depositCount, float &amount, float &balance), Withdraw(int &withdrawCount, int &amount, int &balance);

    switch (choice) {
        case 1: {
            cout << endl << "You have chosen: View Balance" << endl
                << "Your balance is: " << balance << endl;

            checkBalanceCount += 1;

            system("pause");
            system("cls");
            break;
        }
        case 2: {
            Deposit(depositCount, amount, balance);
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

            withdrawCount += 1;

            system("pause");
            system("cls");
            break;
        }
        case 0: {
            cout << endl << "Thank you for using our ATM!";
            Counter(depositCount, withdrawCount, checkBalanceCount);
            mainLoop = false;
            break;
        }
        default: {
            cout << endl << "Please enter a number that is available in the choices." << endl;
            system("pause");
            system("cls");
        }
    }
}

void Counter(int& depositCount, int& withdrawCount, int& checkBalanceCount) {
    cout << endl << "Total amount of transactions:" << endl << endl
        << "1. Check Balance: " << checkBalanceCount << endl
        << "2. Deposit: " << depositCount << endl
        << "3. Withdraw: " << withdrawCount << endl;
}

void Deposit(int& depositCount, int &amount, int &balance) {
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

    depositCount += 1;

    system("pause");
    system("cls");
}