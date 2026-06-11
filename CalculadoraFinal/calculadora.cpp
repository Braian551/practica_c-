#include <iostream>
#include <stdexcept>
#include "headerCalculadora.h"
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int subtraction(int a, int b)
{
    return a - b;
}
int multiplication(int a, int b)
{
    return a * b;
}
double division(int a, int b)
{

    if (b == 0)
    {
        throw invalid_argument("No se puede dividir entre cero");
    }
    return a / b;
}
