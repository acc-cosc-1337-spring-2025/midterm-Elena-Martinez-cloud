#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

// Write a loop that iterates at least 10 times, 
//call the roll_die function, and validate that the value returned is in the range of 1 to 6
TEST_CASE("Test roll_die function", "[roll_die]") {
	srand(time(0));

	for (int i = 0; i < 10; i++) {
		int result = roll_die();
		REQUIRE(result >= 1);
		REQUIRE(result <= 6);
	}
}