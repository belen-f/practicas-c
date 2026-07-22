/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

/* Mutiplos de un numero: 
Pedir un número 
y mostrar los primeros 5 múltiplos de ese numero */


int main()
{
    int num;
    int multiplos[5];
    cout << "Ingresá un numero entero: "<<endl ;
    cin >> num;
    
    cout << "Los primeros 5 multiplos de "<< num <<" son: ";
    
    for (int i=0;i<5;i++) {
        int producto;
        producto=num*(i+1);
        multiplos[i]=producto;
        cout << producto << " ";
    }
    
    cout << endl;
    return 0;
}