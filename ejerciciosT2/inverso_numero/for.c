#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int num; 
    int inverso = 0;
    
    // Pido al usuario que ingrese un número mediante un mensaje con printf //
    printf("Ingrese un número para invertirlo: ");
    scanf("%d", &num);
    
    // Utilizo el bucle for para invertir el número //
    for (; num != 0; num /= 10){
        inverso = inverso * 10 + num % 10;
    }
    
    // Presento el resultado del inverso del número con printf //
    printf("El inverso del número es: %d\n", inverso);
    
    return 0;
}
