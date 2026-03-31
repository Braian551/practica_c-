#include <iostream>
#include <vector>
using namespace std;
// Contar digitos de un número
// Ej: 12345 -> tiene su digitos

int main()
{
    int num; //representa el numero a contar sus digitos
    cout << "Ingresa el numero: " << endl;// se ingresa el numero a contar sus digitos
    cin >> num;
    int digits = 0;// para almacenar el resultado de la cantidad de digitos
    while (num != 0)//bucle que se repetira hasta que el numero sea 0, cada vez que se repita se reducira el numero dividiendolo entre 10 y se sumara 1 a la variable digits
    {
        digits+=1; // suma 1 a la variable digits cada vez que se repite el bucle
        num /=10;// reduce el numero dividiendolo entre 10 cada vez que se repite el bucle, esto hace que se vayan eliminando los digitos del numero hasta llegar a 0
    }

    cout << "El numero tiene "<< digits <<" digitos"<< endl;

    return 0;
}