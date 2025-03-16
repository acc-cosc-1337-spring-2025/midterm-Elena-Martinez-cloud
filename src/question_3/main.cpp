#include <iostream>
#include "question3.h"
using std::cout;
using std::cin;

//The program flow is as follows:
//1) Prompt user for a number.
//a-Validate that the number is in the range of 1 to 10
//2) Pass the number to the get_factorial_sequence function, save the return value to a variable in main.
//3) Display the factorial sequence
//4) The program will loop until user wants to exit.

int main()
{
    int number;
    char choice ='y';

    while (choice == 'y')
    {
        cout << "Enter a number between 1 and 10: ";
        cin >> number;

        if (number < 1 || number > 10){
            cout << "ERROR! Enter a number between 1 and 10."<<"\n";
            continue;
        }

        std::string result = get_factorial_sequence(number);

        cout << result << "\n";

        cout << "Do you want to enter another number? (y/n): "<<"\n";
        cin >> choice;
    }

    cout << "EXITING";
    

    return 0;
}