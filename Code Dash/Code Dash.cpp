#include <iostream>
using namespace std;

string userName;
int userAge, orderSelection;
float totalPayment, loyaltyDiscount;
char discountChoice;
bool orderLoop, mainLoop, discountLoop;

void Intro(), Ordering(), Discount();

int main()
{
    Intro();

    cout << "Welcome, " << userName << "!" << endl << endl;

    Ordering();

    Discount();
    
    cout << "Thank you for ordering!" << endl
         << "Your total is: P" << totalPayment << endl
         << "Thank you for dining with us, we hope to see you again, " << userName << "!";

    return 0;
}

void Intro() {
    cout << "Before we start, we'd like to have your name and age for us to personalize and curate your selection." << endl
         << "Enter your nickname: ";
    cin >> userName;

    cout << "Enter your age: ";
    cin >> userAge;

    cout << "Thank you! Loading curated menu..." << endl;
    system("pause");
    system("cls");
}

void Ordering() {
    orderLoop = true;

    if (userAge >= 12) {
        do {
            cout << "Here are your selections:" << endl
                 << "1. Cheeseburger    - 79" << endl
                 << "2. Quarter Pounder - 119" << endl
                 << "3. French Fries    - 59" << endl
                 << "0. Finish Order" << endl
                 << "Enter your selection: ";

            cin >> orderSelection;

            switch (orderSelection) {
            case 1: {
                cout << endl << "You have selected: Cheeseburger" << endl << endl;
                totalPayment += 79;
                break;
                }
            case 2: {
                cout << endl << "You have selected: Quarter Pounder" << endl << endl;
                totalPayment += 119;
                break;
                }
            case 3: {
                cout << endl << "You have selected: French Fries" << endl << endl;
                totalPayment += 59;
                break;
                }
            case 0: {
                orderLoop = false;
                system("cls");
                break;
                }
            default: {
                cout << endl << "Please pick from one of the available choices." << endl << endl;
            }

        } 

        } while (orderLoop == true);
    }

    else {
        do {
            cout << "Here are your selections:" << endl
                << "1. Chicken Tenders - 89" << endl
                << "2. Mac & Cheese    - 99" << endl
                << "0. Finish Order" << endl
                << "Enter your selection: ";

            cin >> orderSelection;

            switch (orderSelection) {
            case 1: {
                cout << endl << "You have selected: Chicken Tenders" << endl << endl;
                totalPayment += 89;
                break;
            }
            case 2: {
                cout << endl << "You have selected: Mac & Cheese" << endl << endl;
                totalPayment += 99;
                break;
            }
            case 0: {
                orderLoop = false;
                system("cls");
                break;
            }
            default: {
                cout << endl << "Please pick from one of the available choices." << endl << endl;
            }

            }

        } while (orderLoop == true);
    }
}

void Discount() {
    discountLoop = true;

    do {
        cout << "One last question, are you a loyalty member? (Y/N): ";
        cin >> discountChoice;

        switch (toupper(discountChoice)) {
            case 'Y': {
                cout << endl << "That's great! As our loyalty member, you've received a 5% discount on your order!" << endl << endl;
                totalPayment = (totalPayment - (totalPayment * 0.05));
                discountLoop = false;
                break;
            }
            case 'N': {
                discountLoop = false;
                cout << endl << endl;
                break;
            }
            default: {
                cout << endl << "Please pick from one of the available choices." << endl << endl;
            }
        }
    } while (discountLoop == true);
}

// Run program: Ctrl + F5

