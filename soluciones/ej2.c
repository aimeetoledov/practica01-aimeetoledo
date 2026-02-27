#include <stdio.h>

    //Sin ejecutar determina cuál dirección es mayor:
    //&a[4] o &a[5]
    //la dirección de &a[5] porque la del &a[4] va siempre antes que la del &a[5] en la memoria
    //Justifica numéricamente y luego verifica ejecutando

int main() {
    int a[5];

    printf("la direccion de memoria de a[4] es: %p\n", &a[4]);
    printf("la direccion de memoria de v[5] es: %p\n", &a[5]);

    if (&a[4] < &a[5]){
        printf("la direccion de a[5] es mayor que la de a[4]\n");
    }
    else if (&a[4] > &a[5]){
        printf("la dirección de a[4] es mayor que la de a[5]\n");
    }
    return 0;
}
