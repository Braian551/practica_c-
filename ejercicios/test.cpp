#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "CalculadoraSimple.cpp"


TEST_CASE("Prueba de suma"){

    REQUIRE(sum(2,5) == 5);
    REQUIRE(sum (-1,2)== 0);
}