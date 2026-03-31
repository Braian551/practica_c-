#include <iostream>
using namespace std;

// Suma de numeros Hasta N
// ej: si N= 5 -> 1+2+3+4+5+6

int main()
{
    int num; //representa el numero N a sumars
    cout << "Ingresa un numero: " << endl;
    cin >> num;
    int result = 0; // para almacenar el resultado
    int num2 = num; //variable el cual servira para restarse hasta llegar 1
    for (int i = 0; i < num; i++) //bucle que servira para  ir reduciendo y sumando las variables
    {
        result += num2; // suma lo de num2 el cual se reducira en 1 en 1 
        num2 -= 1;
    }
    cout << "Resultado:  " << result << endl;

    return 0;
}