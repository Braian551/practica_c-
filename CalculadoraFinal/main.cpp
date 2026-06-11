#include <iostream>
#include <stdexcept>
#include <string>
#include "headerCalculadora.h"
using namespace std;

void linea()
{
    for (int i = 0; i < 20; i++)
    {
        cout << "=";
    }
    cout << endl;
}

int main()
{

    int option;
    bool exit;
    int num1 = 0;
    int num2 = 0;
    char operatorSimbol = 'n';

    do
    {
        cout << "1.Entrar" << endl;

        cout << "2.salir" << endl;
        cin >> option;

        switch (option)
        {
        case 1:

            linea();
            cout << "Bienvenido a la calculadora" << endl;
            linea();
            cout << "Ingresa el primer numero: " << endl;
            cin >> num1;
            cout << "Ingresa el segundo numero: " << endl;
            cin >> num2;
            linea();
            cout << "1. +";
            cout << "2. -";
            cout << "3. *";
            cout << "4. /";
            exit = false;
            do
            {
                cout << "Escribe un operador: ";
                cin >> operatorSimbol;

                switch (operatorSimbol)
                {
                case '+':
                    cout << "Ressultado: " << sum(num1, num2) << endl;
                    exit = true;
                    break;

                case '/':

                    try
                    {
                        int resultado = division(num1, num2);
                        cout << "Resultado: " << resultado << endl;
                    }
                    catch (const std::exception &e)
                    {
                        cout << "error: " << e.what() << '\n';
                    }

                    exit = true;

                    break;

                default:
                    cout << "valor incorrecto... intentalo de nuevo" << endl;
                    break;
                }

            } while (exit = !true);

            break;
        case 2:
            cout << "Saliendo..." << endl;

            break;
        default:
            cout << "Valor Incorrecto.. Intentalo de nuevo" << endl;
            linea();

            break;
        }

    } while (option != 2);

    return 0;
}