#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    float num;
    float resultado = 0.0;
    float incremento = 0.001; // Ajustamos con este valor para obtener una mayor precisión
    
    // Pido al usuario que ingrese un número mediante un mensaje con printf y lo guardo con scanf //
    printf("Ingrese un número para sacar su raíz cúbica: ");
    scanf("%f", &num);
    // Utilizo el bucle for para sacar la raíz cúbica del número //
    for (float i = 0; i * i * i <= num; i += incremento) {
        resultado = i;
    }

    // Presento los resultados con un mensaje utilizando printf //
    printf("La raíz cúbica de %.2f es: %.2f\n", num, resultado);
    return 0;
}
