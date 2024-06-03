#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int i = 2;
    int num;
    int esPrimo = 1;
    // Pido al usuario que ingrese un número mediante un mensaje con printf y lo guardo con scanf //
    printf("Ingrese un número para verificar si es primo: ");
    scanf("%d", &num);
    // Compruebo si el número ingresado es primo o no con una condición if y el bucle while //
    if (num <= 1) {
        esPrimo = 0;
    } else {
        while (i * i <= num && esPrimo) {
            if (num % i == 0) {
                esPrimo = 0;
            }
            i++;
        }
    }
    // Presento un mensaje con printf con una condición para cuando sea primo o no //
    if (esPrimo) {
        printf("%d es primo.\n", num);
    } else {
        printf("%d no es primo.\n", num);
    }
    
    return 0;
}
