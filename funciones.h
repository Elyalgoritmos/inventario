#ifndef FUNCIONES_H
#define FUNCIONES_H

typedef struct {
    int id;
    char nombre[50];
    int cantidad;
    float precio;
} Producto;

void agregarProducto(Producto productos[], int *numProductos);
void mostrarInventario(Producto productos[], int numProductos);
void consultarProducto(Producto productos[], int numProductos, int id);

#endif
