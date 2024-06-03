#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    float num;
    float resultado = 0.0;

    // Pido al usuario que ingrese un número mediante un mensaje con printf y lo guardo con scanf //
    printf("Ingrese un número para sacar su raíz cúbica: ");
    scanf("%f", &num);

    // Utilizo el bucle do while para sacar la raíz cúbica del número //
   do
   {
     resultado += 0.001; // Incremento para restas sucesivas
   } while (num >= resultado * resultado * resultado);
   
    resultado -= 0.001; // Ajuste final
    
    // Presento los resultados con un mensaje utilizando printf //
    printf("La raíz cúbica de %.2f es: %.2f\n", num, resultado);
    return 0;
}