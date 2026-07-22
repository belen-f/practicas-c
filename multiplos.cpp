#include <iostream>

using namespace std;

/* Múltiplos de un número: 
Pedir un número 
y mostrar
los primeros 5 múltiplos de ese numero */


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
