#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int num;
    int suma = 0;
    int i = 1;
    // Presento un mensaje al usuario con printf para que ingrese el valor de n y lo guardo con scanf //
    printf("Ingrese un número entero n: ");
    scanf("%d", &num);

    // Calculo la suma de los cuadrados y muestro la serie utilizando el bucle while //
    printf("Serie: ");
    while (i <= num) {
        suma += i * i;
        printf("%d^2", i);

        // Presento el signo '+' entre los términos con printf //
        if (i < num) {
            printf(" + ");
        }
        i++;
    }

    // Salto de línea //
    printf("\n");

    // Presento la suma con un mensaje utilizando printf //
    printf("Suma de los cuadrados de los primeros %d números: %d\n", num, suma);

    return 0;
}