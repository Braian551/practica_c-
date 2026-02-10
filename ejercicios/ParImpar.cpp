#include <iostream>
using namespace std;

int main() {
// par o impar

int num; //inicializo la variable num
cout << "Ingrese un numero: " << endl;
cin >> num;
if(num % 2 == 0){
    cout << "el numero:"<< num<< " es par" << endl;
}else{
    cout << "el numero:"<< num<< " es impar" << endl;
}

    
    return 0;
}