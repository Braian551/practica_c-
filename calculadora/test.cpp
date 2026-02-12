#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "CalculadoraSimple.h"

TEST_CASE("Suma") {
    REQUIRE(sum(2,3) == 5);
}

TEST_CASE("Resta") {
    REQUIRE(subtraction(5,3) == 2);
}

TEST_CASE("Multiplicacion") {
    REQUIRE(multiplication(4,3) == 12);
}

TEST_CASE("Division") {
    REQUIRE(division(10,2) == 5);
    REQUIRE_THROWS_AS(division(10,0), std::invalid_argument);
}
