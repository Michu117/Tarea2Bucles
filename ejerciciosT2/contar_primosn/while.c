#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int num;
    int contador = 0;
    int i = 2;
    // Pido al usuario que ingrese un número mediante un mensaje con printf y lo guardo con scanf //
    printf("Ingrese el valor de n: ");
    scanf("%d", &num);

    // Presento un mensaje con printf //
    printf("Los números primos hasta %d son:\n", num);
    // Calculo cuando es un numero primo y el contador de numeros primos utilizando el bucle while y condiciones //
    while (i <= num) {
        int esPrimo = 1; // Cuando i es primo
        int j = 2;
        while (j * j <= i && esPrimo) {
            if (i % j == 0) {
                esPrimo = 0; // Cuando i no es primo
            }
            j++;
        }
        if (esPrimo) {
            printf("%d ", i);
            contador++;
        }
        i++;
    }
    // Presento la cantidad de numeros primos con un mensaje con printf //
    printf("\nHay %d números primos hasta %d\n", contador, num);

    return 0;
}