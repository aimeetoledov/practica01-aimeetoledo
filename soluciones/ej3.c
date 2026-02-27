#include <stdio.h>

int main(){
    int a[3];
    int b[3];
    int c[3];

    for (int i=0; i<3; i++){
        printf("La direccion de memoria de a[%i] es %p\n", i, &a[i]);
    }
    printf("\n");

    for (int i=0; i<3; i++){
        printf("La direccion de memoria de b[%i] es %p\n", i, &b[i]);
    }
    printf("\n");

    for (int i=0; i<3; i++){
        printf("La direccion de memoria de c[%i] es %p\n", i, &c[i]);
    }
    printf("\n");
}
//1. Imprime todas las direcciones

//2. ¿Están juntos en memoria?
//Si están juntos, en nuestro caso, decidimos acomodarlo de tal manera que estuvieran 
//por bloques, es decir, a[0], a[1] y a[2] están en un bloque y así con b y c. Sin embargo 
//al imprimir las direcciones se observó que en la memoria aparecen en orden inverso a 
//como lo declaramos.

//3. ¿De qué depende?
//Como en la mayoría de los sistemas la pila crece hacia abajo, el compilador va 
//reservando memoria hacia direcciones menores. Entonces, aunque se declaró primero 
//a, luego b y después c, en memoria pueden quedar en orden inverso. Lo hace así  el 
//stack, como forma de optimizar o gestionar. 
//Además, los colocó uno seguido del otro sin dejar espacios, lo cual es una forma de 
//optimizar la memoria. Como cada arreglo tiene 3 enteros y cada entero ocupa 4 bytes, 
//cada uno usa 12 bytes, por eso las direcciones cambian exactamente en bloques de 
//12
