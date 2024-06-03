#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int num;
    int cont = 0;
    // Pido al usuario que ingrese un número mediante un mensaje con printf y guardo el valor con scanf//
    printf("Ingresa un número: ");
    scanf("%d", &num);

    // Utilizo el bucle do while para calcular el número de dígitos del número ingresado //
    do{
        cont++;
        num /= 10;
    } while (num != 0);
    
    // Presento el número de dígitos con printf //
    printf("El número de dígitos es: %d\n", cont);

    return 0;
}



