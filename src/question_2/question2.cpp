#include "question2.h"
#include <cstdlib> //for the rand function

bool test_config()
{
    return true;
}

// Write an int value return function roll_die with no parameters. 
// The function will return a random value from 1 to 6
int roll_die() {
    return (rand() % 6) + 1;
}

