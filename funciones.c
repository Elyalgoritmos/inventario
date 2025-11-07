#include <stdio.h>
#include <string.h>
#include "funciones.h"

void agregarProducto(Producto productos[], int *numProductos) {
    printf("Ingrese ID: ");
    scanf("%d", &productos[*numProductos].id);
    printf("Ingrese nombre: ");
    scanf(" %[^\n]", productos[*numProductos].nombre);
    printf("Ingrese cantidad: ");
    scanf("%d", &productos[*numProductos].cantidad);
    printf("Ingrese precio: ");
    scanf("%f", &productos[*numProductos].precio);
    (*numProductos)++;
}

void mostrarInventario(Producto productos[], int numProductos) {
    printf("\nInventario:\n");
    for (int i = 0; i < numProductos; i++) {
        printf("ID: %d | Nombre: %s | Cantidad: %d | Precio: %.2f\n",
               productos[i].id, productos[i].nombre,
               productos[i].cantidad, productos[i].precio);
    }
}

void consultarProducto(Producto productos[], int numProductos, int id) {
    for (int i = 0; i < numProductos; i++) {
        if (productos[i].id == id) {
            printf("Producto encontrado: %s | Stock: %d | Precio: %.2f\n",
                   productos[i].nombre, productos[i].cantidad, productos[i].precio);
            return;
        }
    }
    printf("Producto no encontrado.\n");
