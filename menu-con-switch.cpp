/*  
Menú:
Mostrar un Menú
con 4 operaciones matemáticas
Pedir dos números
y aplicar la operación elejida.
*/
#include <iostream>
using namespace std;

 //Declarar funcion
float operar(float num1,float num2,int operacion);

int main(){   
    
    float num1,num2;
    int operacion;
    
    //Menú 
    cout<< "Menú de operaciones:"<<endl<<endl
        <<"1-Suma"<<endl
        <<"2-Resta"<<endl
        <<"3-Multiplicación"<<endl
        <<"4-División"<<endl<<endl;
    
    //Solicitar dos números
    cout<< "Ingrese primer número: "<<endl;
    cin>>num1;
    cout<<"Ingrese segundo número: "<<endl;
    cin>>num2;
    
    //Solicitar operación
    cout <<"Elija la operación a realizar: "<<endl;
    cin>>operacion;
    
    
    //Declarar y definir variable resultado
    float resultado = operar(num1,num2,operacion);
    
    //Ejecutar función si la operacion es válida
    if (operacion == 4 && num2 ==0){
        //Error del Switch case 4
    } else if (operacion < 1 || operacion >4){
      //Error default del Switch  
    } else {
        cout<<"El resultado de la operación elejida es: "<<resultado<<endl;
    }
    return 0;
}

//Definir función
float operar(float num1,float num2,int operacion) {
    switch(operacion){
        case 1:
            return num1 + num2;
        case 2:
            return num1 - num2;
        case 3:
            return num1 * num2;
        case 4:
            if (num2 != 0){
                return num1 / num2;
            } else {
                cout<<"No se puede dividir por cero."<<endl;
                return 0;
            }
        default:
            cout<<"Hubo un error."<<endl;
            return 0;
    }
}
