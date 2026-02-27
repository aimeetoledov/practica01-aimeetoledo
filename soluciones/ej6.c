#include <stdio.h>

int main(){
    int m[2][4];
    
    for (int i = 0; i < 2; i++){
        for (int j=0; j <4; j++){
            printf("La dirección de m[%i][%i] es: %p\n", i,j, &m[i][j]);
        }
    }
    
}
//1. Imprime direcciones de todos los elementos
//2. determina si almacenamiento es por filas o columnas
//es por filas, primero se lamacena m[0][0], luego m[0][1], m[0][2], m[0][3], m[1][0], m[1][2], m[1][3] y así sucesivamente
//3. Deduce fórmula de dirección de m[i][j]
//Dirección: Base + [(i × Número de Columnas) + j] × tam_tipo 
//Primero, i × Número de Columnas, para calcular cuántos elementos hay en todas las 
//filas anteriores. Luego + j, avanza dentro de la fila actual hasta la columna que quiero, 
//eso me da el número total de elementos antes de m[i][j]. Después se multiplica por el 
//tamaño del tipo de dato y al final se suma a la base.
