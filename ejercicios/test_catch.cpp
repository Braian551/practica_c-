#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "CalculadoraSimple.h"
#include <stdexcept>
using namespace std;
TEST_CASE("Operaciones basicas", "[aritmetica]")
{
    SECTION("Suma operadores")
    {
        REQUIRE((1 + 2) == 3);
        REQUIRE((5 + 0) == 5);
    }

    SECTION("Suma funciones")
    {
        REQUIRE(sum(1, 2) == 3);
        REQUIRE(sum(5, 0) == 5);
    }

    SECTION("Resta")
    {
        REQUIRE(subtraction(5, 3) == 2);
        REQUIRE(subtraction(0, 1) == -1);
    }

    SECTION("Multiplicacion")
    {
        REQUIRE(multiplication(3, 4) == 12);
        REQUIRE(multiplication(0, 100) == 0);
    }

    SECTION("Division")
    {
        REQUIRE(division(10, 2) == 5);
        REQUIRE_THROWS_AS(division(10,0), invalid_argument);
    }
}
