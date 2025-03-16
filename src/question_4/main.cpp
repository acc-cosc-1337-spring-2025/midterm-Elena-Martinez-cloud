#include <iostream>
#include "question4.h"
using std::cout;
using std::cin;
using std::vector;

//The main program prompts the user for number of cookies, calls the get_cookie_ingredients function, 
//display the vector of double to screen, and continues until user opts to quit


int main()
{
    int cookies;
    char choice ='y';

    while (choice == 'y')
    {
        cout << "Enter the number of cookies you want to make: "<< "\n";
        cin >> cookies;

        if (cin.fail() || cookies <= 0) {
            cout << "ERROR enter a postive number" << "\n";
            cin.clear();
        }

        vector<double> ingredients = get_cookie_ingredients(cookies);

        cout << "To bake " << cookies << " cookies, you will need:"<< "\n";
        cout << "Sugar: " << ingredients[0] << " cups"<< "\n";
        cout << "Butter: " << ingredients[1] << " cups"<< "\n";
        cout << "Flour: " << ingredients[2] << " cups"<< "\n";




        cout<< "Would you like to enter a different number of cookies (y/n)? "<< "\n";
        cin >> choice;
    }

    cout << "EXITING";

    return 0;
}