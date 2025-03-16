#include "question3.h"

bool test_config()
{
    return true;
}

// In the cpp file, write the code to return the factorial sequence for 
//the int parameter value.
std::string get_factorial_sequence(int n){
    if (n < 1) {
        return "Error: Invalid Input!";
    }


    int factorial = 1;
    std::string result = "";

    for (int i = 1; i <= n; i++) {
        result += std::to_string(i);

        if (i < n) {
            result += "x";
        }
        factorial *= i;
    }

    result += "=" + std::to_string(factorial);
    return result;

}