#include <stdio.h>
int main() {
    int num; 
    int suma = 0;
    // Pido al usuario que ingrese un número mediante un mensaje con printf //
    printf("Ingrese el valor de n: ");
    scanf("%d", &num);
    // Calculo y presento el proceso de suma de los factoriales con un bucle for y printf //
    for (int i = 1; i <= num; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        
        // Presento el término actual con printf //
        if (i == num) {
            printf("%d!", i);
        } else {
            printf("%d! + ", i);
        }
        
        suma += factorial;
    }
    
    // Presento el resultado de la suma con un mensaje utilizando printf //
    printf(" = %d\n", suma);
    
    return 0;
}