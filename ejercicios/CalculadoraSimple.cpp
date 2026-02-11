#include <iostream>
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

    int option = 0;
    cout << "Elige un operador, y escribe la opcion" << endl;

    cout << "1. * " << endl;
    cout << "2. / " << endl;
    cout << "3. + " << endl;
    cout << "4. - " << endl;

    cin >> option;

    int result = 0;
    switch (option)
    {
    case 1:
        result = num1 * num2;
        cout << "Resultado de la multiplicacion: " << result << endl;
        break;
    case 2:
        if (num2 == 0)
        {
            cout << "no se puede dividir entre cero" << endl;
        }
        else
        {

            double result2 = 0;
            result2 = num1 / num2;
            cout << "Resultado de la division: " << result2 << endl;
        }

        break;
    case 3:
        result = num1 + num2;
        cout << "Resultado de la suma: " << result << endl;
        break;
    case 4:
        result = num1 - num2;
        cout << "Resultado de la resta: " << result << endl;
        break;

    default:
        cout << "No es una opcion valida" << endl;
        break;
    }

    return 0;
}