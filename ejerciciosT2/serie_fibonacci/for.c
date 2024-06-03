#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int num;
    int i;
    // Utilizo unsigned long long int ya que es un tipo de dato entero que puede almacenar valores muy grandes que se pueden dar en la serie de Fibonacci //
    // Usando solamente int da lugar a error con números muy grandes //
    unsigned long long int numfib1 = 0; 
    unsigned long long int numfib2 = 1; 
    unsigned long long int nextnum;

    // Pido al usuario que ingrese un número que define la longitud de la serie mediante un mensaje con printf //
    printf("Introduce el número de elementos de la serie de Fibonacci: ");
    scanf("%d", &num); // Guardo el valor de la longitud con scanf

    // Presento los primeros dos números de la serie con printf //
    printf("Serie de Fibonacci: %llu, %llu", numfib1, numfib2);

    // Utilizo el bucle for para generar el resto de la serie //
    // Presento el resto de la serie con printf //
    for (i = 3; i <= num; i++) {
        nextnum = numfib1 + numfib2;
        printf(", %llu", nextnum);
        numfib1 = numfib2;
        numfib2 = nextnum;
    }

    return 0;
}
