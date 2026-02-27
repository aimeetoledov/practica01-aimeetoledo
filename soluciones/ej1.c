#include <stdio.h>

int main(){
    int a[6];
    for(int i=0; i<6; i++){
        printf("La direccion de a[%i] es: %p\n", i,&a[i]);
    }
    return 0;
}

//1. Imprime direcciones de todos los elementos
//2. Calcula diferencia entre direcciones consecutivas
//La diferencia corresponde al espacio en la memoria de cada entero, entonces su diferencia es de 4 bytes 
//3. Escribe fórmula general para dirección de a[i]
//Base + i x tam_tipo
