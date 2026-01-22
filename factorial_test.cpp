// #include <gtest/gtest.h>
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "factorial.hpp"

TEST_CASE("Factorial of 0", "[factorial]") {
    REQUIRE(calculateFactorial(0) == 1);
}

TEST_CASE("Factorial of 1", "[factorial]") {
    REQUIRE(calculateFactorial(1) == 1);
}

TEST_CASE("Factorial of 5", "[factorial]") {
    REQUIRE(calculateFactorial(5) == 120);
}

TEST_CASE("Factorial of 10", "[factorial]") {
    REQUIRE(calculateFactorial(10) == 3628800);
}

TEST_CASE("Factorial of 20", "[factorial]") {
    REQUIRE(calculateFactorial(20) == 2432902008176640000LL);
}

TEST_CASE("Negative number throws exception", "[factorial]") {
    REQUIRE_THROWS_AS(calculateFactorial(-5), std::invalid_argument);
}
