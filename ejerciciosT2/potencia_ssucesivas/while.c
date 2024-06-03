#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int base; 
    int exponente;
    int resultado = 1;
    int contador= 0;
    // Presento un mensaje para que el usuario ingrese la base y el exponente con printf y guardo el valor con scanf //
    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    // Utilizando un bucle while calculo la potencia mediante sumas sucesivas //
    while (contador < exponente) {
        resultado *= base;
        contador++;
    }
    
    // Presento el resultado de la potencia del número con printf //
    printf("El resultado de %d^%d es: %d\n", base, exponente, resultado);

    return 0;
}
