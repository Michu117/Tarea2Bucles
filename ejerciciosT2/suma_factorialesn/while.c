#include <stdio.h>
int main() {
    int num; 
    int suma = 0;
    int i = 1;
    // Pido al usuario que ingrese un número mediante un mensaje con printf //
    printf("Ingrese el valor de n: ");
    scanf("%d", &num);
    // Calculo y presento el proceso de suma de los factoriales con un bucle while y printf //
    while (i <= num) {
        int factorial = 1;
        int j = 1;
        while (j <= i) {
            factorial *= j;
            j++;
        }
        // Presento el término actual con printf //
        if (i == num) {
            printf("%d!", i);
        } else {
            printf("%d! + ", i);
        }
        
        suma += factorial;
        i++;
    }
    // Presento el resultado de la suma con un mensaje utilizando printf //
    printf(" = %d\n", suma);
    
    return 0;
}