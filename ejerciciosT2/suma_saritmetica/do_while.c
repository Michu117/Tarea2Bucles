#include <stdio.h>
int main() {
     // Declaro las variables que utilizaré //
    int num; 
    int i = 1; 
    int suma = 0;
    // Pido al usuario que ingrese un número mediante un mensaje con printf y lo guardo con scanf //
    printf("Ingresa el valor de n: ");
    scanf("%d", &num);

    printf("La serie es: ");

    // Utilizo do while para sumar los primeros n términos y mostrar la serie //
    do{
        printf("%d", i);
        if (i < num) {
            printf(" + ");
        }
        suma += i;
        i++;
    } while (i <= num);
    
    // Presento el resultado de la suma con printf //
    printf("\nLa suma de los primeros %d términos es: %d\n", num, suma);

    return 0;
}