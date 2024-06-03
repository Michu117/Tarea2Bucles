#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int n;
    int suma = 0;
    int i= 2;
    // Presento un mensaje con prinft que el usuario ingrese el valor de n y lo guardo con scanf
    printf("Introduce el valor de n: ");
    scanf("%d", &n);

    printf("Serie de números pares: ");
    
    // Utilizo un bucle while para sumar los números pares //
    while (i <= n) {
        printf("%d ", i); // Presento los numeros pares
        suma += i;
        i += 2;
    }

    // Presento la suma de los números pares con printf //
    printf("\nSuma de los números pares hasta %d = %d\n", n, suma);

    return 0;
}
