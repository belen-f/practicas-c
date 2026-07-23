/* 

Condicional anidado:
Pedir una nota
y mostrar:
-"Muy bien" si es 9 o 10.
-"Bien" si es 6 a 8.
-"Debe recuperar" si es menor a 6.

*/

#include <iostream>

using namespace std;

int main() {
    int nota;
    cout<<"Ingrese su nota (del 1 al 10): ";
    cin>> nota;
    
    if (nota < 1 || nota > 10){
        cout<<"La nota ingresada no es válida" <<endl;
    } 
    else if (nota >= 9) {
        cout<<"Estado: Muy bien"<<endl;
    } 
    else if (nota >= 6){
        cout<<"Estado: Bien"<<endl;
    } 
    else {
        cout<<"Estado: Debe recuperar"<<endl;
    }
    
    return 0;
}