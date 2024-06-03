#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int num;
    float suma = 0;
    int i = 1;
    // Pido al usuario que ingrese el valor de n con un mensaje utilizando printf //
    printf("Ingrese el valor de n: ");
    scanf("%d", &num);
    // Calculo la serie y la suma. Presento la serie con printf. Utilizando el bucle while //
    printf("Serie: ");
    while (i <= num) {
        suma += 1.0 / i;
        printf("1/%d", i);
        if (i < num)
            printf(" + ");
        i++;
    }
    //Presento el resultado de la suma con printf
    printf("\nLa suma de la serie hasta 1/%d es: %f\n", num, suma);

    return 0;
}
