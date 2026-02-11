#include <iostream>
#include <vector> //para el uso de vectores y el uso de metodos como push_back
using namespace std;

int main()
{
    int count = 0; // contador para el numero de vueltas 
    cout << "Cuantos numeros vas a ingresar: " << endl;
    cin >> count;
    vector<int> nums; //inicializa el vector o array
    for (int i = 0; i < count; i++) // for para mostrar cuantas veces se va a mostrar el mensaje
    {
        int num = 0; // para almacenar el numero
        cout << "Ingresa un numero" << endl;
        cin >> num;
        nums.push_back(num); // ingreso al vector
    }

    int mayor = nums[0]; //para que almacene el numero de la primera posicion
    int menor = nums[0];

    for (int num2 : nums) // for para sacar cada elemento
    {
        if (num2 > mayor) // condicionales si el numero es mayor que el actual mayor entonces reemplaza
        {
            mayor = num2;
        }
        else if (num2 < menor)
        {
            menor = num2;
        }
    }
    cout << "===========================================" << endl;
    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;
    
    return 0;
}
