#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int num;
    unsigned long long factorial = 1; // Unsigned long long para manejar números grandes

    // Pido al usuario que introduzca un número con printf y lo guardo con scanf //
    printf("Introduce un número entero para calcular su factorial: ");
    scanf("%d", &num);

    // Verifico si el número es negativo
    if (num < 0) {
        printf("El factorial de un número negativo no está definido.\n");
    } else {
        printf("%d! = ", num);

        // Calculo y presento el factorial utilizando un bucle for //
        for (int i = num; i > 0; i--) {
            factorial *= i;
            printf("%d", i);
            if (i > 1) {
                printf(" * ");
            }
        }
        // Presento la expresión del factorial con printf //
        printf(" = %llu\n", factorial);
    }

    return 0;
}

