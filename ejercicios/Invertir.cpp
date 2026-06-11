#include <iostream>
using namespace std;
// invertir un numero 123 -> 321

int main()
{
    int num;
    cout << "Ingresa un numero: " << endl;
    cin >> num; // se ingresa el numero a invertir
    int digits = 0; // para almacenar el resultado de cada digito del numero, se usara para ir construyendo el nuevo numero invertido
    int newNum = 0;// para almacenar el nuevo numero invertido, se ira construyendo a medida que se vayan obteniendo los digitos del numero original

    while (num > 0) //bucle que se repetira hasta que el numero sea 0, cada vez que se repita se reducira el numero dividiendolo entre 10 y se obtendra el ultimo digito del numero original usando el operador modulo, este digito se almacenara en la variable digits y se ira construyendo el nuevo numero invertido multiplicando el nuevo numero por 10 y sumando el digito obtenido
    {
        digits = num % 10; // obtiene el ultimo digito del numero original usando el operador modulo, este digito se almacenara en la variable digits
        num /= 10; // reduce el numero dividiendolo entre 10 cada vez que se repite el bucle, esto hace que se vayan eliminando los digitos del numero hasta llegar a 0
        newNum = newNum * 10 + digits; // se va construyendo el nuevo numero invertido multiplicando el nuevo numero por 10 y sumando el digito obtenido, esto hace que cada nuevo digito se agregue al final del nuevo numero invertido, por ejemplo si el nuevo numero es 321 y se obtiene el digito 4, el nuevo numero se convierte en 3210 + 4 = 3214, luego si se obtiene el digito 5, el nuevo numero se convierte en 32140 + 5 = 32145, y asi sucesivamente hasta obtener el nuevo numero invertido completo
    }

    cout << "El nuevo numero invertido es:  " << newNum << endl;
}