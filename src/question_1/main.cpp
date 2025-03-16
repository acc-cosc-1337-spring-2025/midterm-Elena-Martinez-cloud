#include <iostream>
#include "question1.h"
using std::cout;
using std::cin;

int main()
{
    double sales;
    char choice = 'y';

    while (choice == 'y'){
        cout << "Enter sales amount: ";
        cin >> sales;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Please enter a number. \n";
            continue;

        }

        double commission = get_sales_commission(sales);

        cout << "sales of "<< sales << " yields a commission of " << commission << "\n";

        cout << "Do you want to enter another sales amount (y/n): ";
        cin >> choice;
    }

    cout << "EXITING\n";
    return 0;

}