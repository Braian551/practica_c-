#include <iostream>
using namespace std;

int main() {
// par o impar

int num; //inicializo la variable num
cout << "Ingrese un numero: " << endl;
// inicializo cin para ingresar el numero
cin >> num;
// condicional con modullo si el resto es 0 es par sino impar
if(num % 2 == 0){
    cout << "el numero:"<< num<< " es par" << endl;
}else{
    cout << "el numero:"<< num<< " es impar" << endl;
}

    
    return 0;
}