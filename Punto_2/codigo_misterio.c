#include <stdio.h>

void invertirNumeros(int *numero) {
    int temp = *numero;
    int invertido = 0;
    while (temp > 0) {
        invertido = (invertido * 10) + (temp % 10);
        temp = temp / 10;
    }
    *numero = invertido;
}

void dividirPorDos(int *numero) {
    *numero = *numero / 2;
}

void sumarNumeros(int *numero) {
    int temp = *numero;
    int suma = 0;
    while (temp > 0) {
        suma = suma + (temp % 10);
        temp = temp / 10;
    }
    *numero = *numero + suma;
}

void procesarNumero(int *numero) {
    invertirNumeros(numero);
    dividirPorDos(numero);
    sumarNumeros(numero);
}

int main() {
    int numero = 452;

    printf("Iniciando depuracion con el valor: %d\n", numero);

    // Instrucción para el alumno:
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesarNumero(&numero);

    printf("Resultado final del procesamiento: %d\n", numero);

    return 0;
}