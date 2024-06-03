#include <stdio.h>
int main() {
    // Declaro las variables que utilizaré //
    int n;
    float producto = 1.0;
    // Pido al usuario que ingrese un número mediante un mensaje con printf y lo guardo con scanf //
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    printf("Serie: ");
    // Calculo la serie y su producto. Presento la serie. Con un bucle for // 
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i; 
        printf("1/%d ", i); 
        if (i < n) {
            printf("* ");
        }
    }
    // Presento el resultado del producto de la serie con printf //
    printf("\nProducto de la serie hasta 1/%d = %f\n", n, producto);

    return 0;
}
