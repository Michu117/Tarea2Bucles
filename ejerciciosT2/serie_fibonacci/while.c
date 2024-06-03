#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int num;
    int i = 2;
    // Utilizo unsigned long long int ya que es un tipo de dato entero que puede almacenar valores muy grandes que se pueden dar en la serie de Fibonacci //
    // Usando solamente int da lugar a error con números muy grandes //
    unsigned long long int numfib1 = 0; 
    unsigned long long int numfib2 = 1; 
    unsigned long long int nextnum;

    // Pido al usuario que ingrese un número que define la longitud de la serie mediante un mensaje con printf //
    printf("Introduce el número de elementos de la serie de Fibonacci: ");
    scanf("%d", &num); // Guardo el valor de la longitud con scanf

    // Como definí i= 2 while no presenta los dos primeros números //
    // Compruebo si el número de elementos es al menos 1 y lo presento con printf //
    if (num >= 1) {
        printf("Serie de Fibonacci: %llu", numfib1);
    }
    // Compruebo si el número de elementos es al menos 2 y lo presento con printf //
    if (num >= 2) {
        printf(", %llu", numfib2);
    }

    // Utilizo un bucle while para generar el resto de la serie //
    // Presento el resto de la serie con printf //
    while (i < num) {
        nextnum = numfib1 + numfib2;
        printf(", %llu", nextnum);
        numfib1 = numfib2;
        numfib2 = nextnum;
        i++;
    }

    return 0;
}