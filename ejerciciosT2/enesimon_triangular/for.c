#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int num;
    int suma = 0;
    // Pido al usuario que ingrese un número mediante un mensaje con printf y lo guardo con scanf //
    printf("Ingrese el valor de n: ");
    scanf("%d", &num);
    printf("La serie triangular hasta el %d-ésimo número es:\n", num);
    // Calculo el n-ésimo número, presento la suma, todo con un bucle for //
    for (int i = 1; i <= num; i++) {
        suma += i;
        printf("%d ", i);
        if (i != num) {
            printf("+ ");
        }
    }
    // Presento el resultado del n-ésimo número con printf //
    printf("\nLa suma hasta el %d-ésimo número triangular es: %d\n", num, suma);
    return 0;
}