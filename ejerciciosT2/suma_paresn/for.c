#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int n;
    int suma = 0;

    // Presento un mensaje con prinft que el usuario ingrese el valor de n y lo guardo con scanf
    printf("Introduce el valor de n: ");
    scanf("%d", &n);

    printf("Serie de números pares: ");
    
    // Utilizo un bucle for para sumar los números pares //
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i); // Presento la serie de numeros pares //
        suma += i;
    }

    // Presento la suma de los números pares con printf //
    printf("\nSuma de los números pares hasta %d = %d\n", n, suma);

    return 0;
}
