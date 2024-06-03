#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int n;
    int suma = 0;

    // Solicita al usuario ingresar el valor de n
    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    // Calculo y presento la serie de números impares con un bucle for y printf//
    printf("La serie de números impares hasta %d es: ", n);
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
        suma += i;
    }
    printf("\n");

    // Presento el resultado de la suma con printf //
    printf("La suma de los números impares hasta %d es %d\n", n, suma);

    return 0;
}
