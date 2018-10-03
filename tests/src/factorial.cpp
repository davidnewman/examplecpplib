#include <catch2/catch.hpp>
#include "mylib.h"

TEST_CASE( "Factorials can be computed", "[factorial]" ) {
    REQUIRE(mylib::Factorial(0) == 1);
    REQUIRE(mylib::Factorial(1) == 1);
    REQUIRE(mylib::Factorial(2) == 2);
    REQUIRE(mylib::Factorial(3) == 6);
    REQUIRE(mylib::Factorial(10) == 3628800);
    REQUIRE(mylib::Factorial(12) == 479001600);
}
