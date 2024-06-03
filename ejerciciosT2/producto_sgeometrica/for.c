#include <stdio.h>
int main() {
    int num, a, r, i;
    long long producto = 1;  // Utilizo long long para manejar números grandes

    // Utilizo printf para mostrar un mensaje que pide al usuario que ingrese los valores de n (número de términos), a (primer término), y r (razón común). //
    // Utilizo scanf para guardar los valores //
    printf("Ingrese el número de términos (n): ");
    scanf("%d", &num);

    printf("Ingrese el primer término (a): ");
    scanf("%d", &a);

    printf("Ingrese la razón común (r): ");
    scanf("%d", &r);

    printf("La serie es: ");
    // Inicio el primer término de la serie //
    int termino = a;
    // Calculo y presento cada término de la serie con el bucle for //
    for(i = 0; i < num; i++) {
        printf("%d ", termino);
        producto *= termino;
        termino *= r;  // Calculo el siguiente término multiplicando por la razón común //
    }
    // Presento el resultado del producto de los primeros términos de la serie //
    printf("\nEl producto de los primeros %d términos de la serie geométrica es: %lld\n", num, producto);

    return 0;
}
