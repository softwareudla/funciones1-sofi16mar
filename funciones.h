#ifndef FUNCIONES_H
#define FUNCIONES_H

#define maxproduc 10

// Declaración de funciones
void ingresarProducto(char nombres[10][50], float precios[10], int cantidad);
void mostrarProductos(char nombres[10][50], float precios[10], int cantidad);
float calcTotal(float precios[10], int cantidad);
float calcPromedio(float precios[10], int cantidad);
void buscarProducto(char nombreBuscado[10], char nombres[10][50], float precios[10], int cantidad);
void encontrarMaxMin(float precios[10], char nombres[10][50], int cantidad);

#endif
