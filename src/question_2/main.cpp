#include <iostream>
#include "question2.h"
using std::cout;
using std::cin;


// Prompt the user for Y, if Y the program rolls the die, displays the result, 
// and continues to prompt the user until the user types something other than Y
int main()
{
    srand(time(0));
    char choice = 'y';

    while (choice == 'y')
    {
        cout << "Roll the die? (y/n): ";
        cin >> choice;

        if (choice == 'y'){
            int result = roll_die();
            cout << "You rolled: "<< result << "\n";
        }
    }
    
    cout << "Exiting the program";

    return 0;
}