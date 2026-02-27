#include <stdio.h>

int main(){
    int gigante[10000000];
    //Si falla:
//1. explica causa
    // El arreglo gigante[10000000] intenta reservar aproximadamente 40 de memoria y la capacidad máxima de la pila (Stack) para cada programa es de 8 MB
//2. indica dónde se almacena
    //Cualquier variable declarada en main (), se guarda en automático en la pila (Stack)
//3. propone solución sin memoria dinámica
    //Ponerlo fuera del main (), para que se pueda declarar como una variable global.
    return 0;
}
