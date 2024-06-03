#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int num1; 
    int num2;
    int i;
    int mcd;

    // Leer dos números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    // Encuentro el MCD usando un bucle for //
    for(i = 1; i <= num1 && i <= num2; i++) {
        // Verifico si i es un divisor común utilizando if //
        if(num1 % i == 0 && num2 % i == 0) {
            mcd = i;
        }
    }

    // Presento el resultado con un mensaje con Printf //
    printf("El MCD de %d y %d es %d\n", num1, num2, mcd);

    return 0;
}
