#include <iostream>
#include "CalculadoraSimple.h"

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;

    cout << "Ingresa el primer numero" << endl;
    cin >> num1;
    cout << "Ingresa el segundo numero" << endl;
    cin >> num2;

    for (int i = 0; i < 20; i++)
    {
        cout << "+=";
    }
    cout << endl;

    char option = 'n';
    cout << "Elige un operador, y escribe la opcion" << endl;

    cout << "1. * " << endl;
    cout << "2. / " << endl;
    cout << "3. + " << endl;
    cout << "4. - " << endl;

    cin >> option;

    switch (option)
    {
    case '*':
        cout << "Resultado de la multiplicacion: " << multiplication(num1, num2) << endl;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "No se puede dividir entre 0" << endl;
        }
        else
        {
            cout << "Resultado de la division: " << division(num1, num2) << endl;
        }

        break;
    case '+':
        cout << "Resultado de la suma: " << sum(num1, num2) << endl;
        break;
    case '-':
        cout << "Resultado de la resta: " << subtraction(num1,num2) << endl;
        break;

    default:
        cout << "No es una opcion valida, el valor escrito: '" << option << "'" << endl;
        break;
    }

    return 0;
}
