#include "CalculadoraSimple.h"
#include <stdexcept>
using namespace std;
int multiplication(int a, int b) { return a * b; }
int division(int a, int b) {
    if( b == 0){
        throw invalid_argument("no se puede dividir entre 0");
    }
    return a/b;
}
int sum(int a, int b) { return a + b; }
int subtraction(int a, int b) { return a - b; }
