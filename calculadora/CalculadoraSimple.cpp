#include "CalculadoraSimple.h"
#include <stdexcept>

int sum(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("No se puede dividir entre 0");
    }
    return a / b;
}
