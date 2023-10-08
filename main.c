#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char CodigoProducto[12], CodigoAlmacen[16];
    int ValorProducto;
    bool codigoValido = false;

    while (!codigoValido) {
        printf("Ingrese el codigo de barras del producto: ");
        scanf("%s", CodigoProducto);

        printf("Ingrese el valor del producto: ");
        scanf("%d", &ValorProducto);

        printf("Ingrese el codigo del almacén: ");
        scanf("%s", CodigoAlmacen);

        if ((strcmp(CodigoProducto, "8949899430") == 0 || strcmp(CodigoProducto, "7653512593") == 0 || 
             strcmp(CodigoProducto, "9383867373") == 0 || strcmp(CodigoProducto, "88392904209") == 0) &&
            (strcmp(CodigoAlmacen, "894985943020763") == 0 || strcmp(CodigoAlmacen, "165331255320221") == 0 || 
             strcmp(CodigoAlmacen, "248386737320130") == 0 || strcmp(CodigoAlmacen, "183923092220561") == 0)) {
            // Descuento del 20%
            double descuento = ValorProducto * 0.20;
            double valorConDescuento = ValorProducto - descuento;
            printf("El valor del producto con un 20%% de descuento es: %.2lf\n", valorConDescuento);
            codigoValido = true;
        } else {
            printf("Error: Código de producto o almacén inválido. Recuerde que el codigo de producto son 10 caracteres y el del almacen 15.\n");
        }
    }

    return 0;
}
