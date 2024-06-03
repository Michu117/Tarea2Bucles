#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int num1; 
    int num2;

    // Leer dos números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    // Encuentro el MCD usando un bucle while //
    while (num1 != num2) {
        if (num1 > num2) {
            num1 = num1 - num2;
        } else {
            num2 = num2 - num1;
        }
    }

    // Presento el resultado con un mensaje con Printf //
    printf("El MCD de los números ingresados es %d\n", num1);

    return 0;
}