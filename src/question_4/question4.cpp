#include "question4.h"
using std::vector;

bool test_config()
{
    return true;
}

// write code to 
//calculate the correct cups for each ingredient and return the 3 values in a vector of double.

vector<double> get_cookie_ingredients(int cookies){
    const double sugar_per_48_cookies = 1.5;
    const double butter_per_48_cookies = 1.0;
    const double flour_per_48_cookies = 2.75;

    double sugar = (sugar_per_48_cookies/48)* cookies;
    double butter = (butter_per_48_cookies/48)*cookies;
    double flour = (flour_per_48_cookies/48)*cookies;

    return {
        sugar, butter, flour
    };
}