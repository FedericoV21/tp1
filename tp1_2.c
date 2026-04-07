#include <stdio.h>

int cuadradoDeUnNumero1(int n){
    return n * n;
}

void cuadradoDeUnNumero2(int n){
    int resultado = n * n;
    printf("El cuadrado de %d es %d\n", n, resultado);
}

void Invertir(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void orden(int *a, int *b){
    if(*a > *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(){
    int a, b;
    printf("Ingrese dos numeros enteros separados por espacio: ");
    scanf("%d %d", &a, &b);

    printf("\nVariable a: contenido = %d, direccion = %p\n", a, (void*)&a);
    printf("Variable b: contenido = %d, direccion = %p\n", b, (void*)&b);

    printf("\nUsando cuadradoDeUnNumero1:\n");
    printf("El cuadrado de %d es %d\n", a, cuadradoDeUnNumero1(a));
    printf("El cuadrado de %d es %d\n", b, cuadradoDeUnNumero1(b));

    printf("\nUsando cuadradoDeUnNumero2:\n");
    cuadradoDeUnNumero2(a);
    cuadradoDeUnNumero2(b);

    Invertir(&a, &b);
    printf("\nInvertido:\n");
    printf("a = %d, b = %d\n", a, b);

    orden(&a, &b);
    printf("\nOrdenado:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}