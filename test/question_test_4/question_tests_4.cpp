#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"
using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("test get_cookie_ingredients function"){
	vector<double> ingredients_48 = get_cookie_ingredients(48);
	REQUIRE(ingredients_48[0] == 1.5);
	REQUIRE(ingredients_48[1] == 1.0);
	REQUIRE(ingredients_48[2] == 2.75);

	vector<double> ingredients_96 = get_cookie_ingredients(96);
	REQUIRE(ingredients_96[0] == 3);
	REQUIRE(ingredients_96[1] == 2);
	REQUIRE(ingredients_96[2] == 5.5);

	vector<double> ingredients_24 = get_cookie_ingredients(24);
	REQUIRE(ingredients_24[0] == 0.75);
	REQUIRE(ingredients_24[1] == 0.5);
	REQUIRE(ingredients_24[2] == 1.375);
}