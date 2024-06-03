#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int num;
    float suma = 0;
    // Pido al usuario que ingrese el valor de n con un mensaje utilizando printf //
    printf("Ingrese el valor de n: ");
    scanf("%d", &num);
    // Calculo la serie y la suma. Presento la serie con printf. Utilizando el bucle for //
    printf("Serie: ");
    for (int i = 1; i <= num; i++) {
        suma += 1.0 / i;
        printf("1/%d", i);
        if (i < num)
            printf(" + ");
    }
    //Presento el resultado de la suma con printf
    printf("\nLa suma de la serie hasta 1/%d es: %f\n", num, suma);

    return 0;
}
