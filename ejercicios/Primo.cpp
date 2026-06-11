#include <iostream>
using namespace std;

// Verificar si un número es primo
int main()
{
    cout << "Ingrese un numero: " << endl;
    int num;
    cin >> num;
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)

        {
            count ++;
        }

    }

    if (count > 2)
    {
        cout << "No es primo" << endl;
    }else{
        cout << "Si es primo" << endl;
    }
    

    return 0;
}