#include <stdio.h>
#include "funciones.h"

int main() {
    Producto productos[100];
    int numProductos = 0;
    int opcion, id;

    do {
        printf("\n--- Menú Inventario ---\n");
        printf("1. Agregar producto\n");
        printf("2. Mostrar inventario\n");
        printf("3. Consultar producto por ID\n");
        printf("0. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                agregarProducto(productos, &numProductos);
                break;
            case 2:
                mostrarInventario(productos, numProductos);
                break;
            case 3:
                printf("Ingrese ID a consultar: ");
                scanf("%d", &id);
                consultarProducto(productos, numProductos, id);
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while (opcion != 0);

    return 0;
}
