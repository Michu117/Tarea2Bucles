#include <stdio.h>
int main() {
     // Declaro las variables que utilizaré //
    int num;
    unsigned long long factorial = 1; // Para manejar números grandes

    // Pido al usuario que introduzca un número con printf y lo guardo con scanf //
    printf("Introduce un número entero para calcular su factorial: ");
    scanf("%d", &num);

    // Verifico si el número es negativo //
    if (num < 0) {
        printf("El factorial de un número negativo no existe.\n");
    } else {
        int i = num;

        // Calculo y presento el factorial usando el bucle do while y printf //
        printf("%d! = ", num);
        do
        {
            if (i != num) {
                printf("*");
            }
            printf("%d", i);
            factorial *= i;
            i--;
        } while (i > 0);
        
        printf(" = %llu\n", factorial);
    }

    return 0;
}
