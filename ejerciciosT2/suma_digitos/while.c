#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int num;
    int sum = 0;
    int digit;
    // Pido al usuario que ingrese un número mediante un mensaje con printf //
    printf("Ingrese un número entero para sumar sus dígitos: ");
    scanf("%d", &num); // Utilizo scanf para leer el valor del número que ingresa el usuario
    // Si se ingresa un número negativo utilizo if para transformarlo en positivo para evitar error // 
    if (num < 0){
        num = -num;
    }

    // Uso el bucle while para calcular la suma de los dígitos //
    while (num > 0){
        digit = num % 10;  // Obtengo el último dígito
        sum += digit;      // Sumo el dígito a la suma total
        num /= 10;         // Elimino el último dígito
    }

    // Presento el resultado de la suma de los dígitos con printf //
    printf("La suma de los dígitos es: %d\n", sum);

    return 0;
}



