#include <stdio.h>

int main(){
    
    int *puntero;
    int variable = 10;

    puntero = &variable;

    printf("El contenido del puntero es; %d\n", *puntero);
    printf("La direccion de memoria almacenada en el puntero es: %p \n", puntero);
    printf("La direccion de memoria de la variable es: %p \n", &variable);
    printf("La direccion de memoria del puntero es; %p \n", &puntero);
    printf("El tamaño de memoria utilizado por la variable es: %lu bytes \n", sizeof(variable));
    return 0;
 }