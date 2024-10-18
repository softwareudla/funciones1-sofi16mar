#ifndef FUNCIONES_H
#define FUNCIONES_H

#define maxproduc 10

// Declaración de funciones
void ingresarProducto(char nombres[][50], float precios[], int cantidad);
void mostrarProductos(char nombres[][50], float precios[], int cantidad);
float calcTotal(float precios[], int cantidad);
float calcPromedio(float precios[], int cantidad);
void buscarProducto(char nombreBuscado[], char nombres[][50], float precios[], int cantidad);
void encontrarMaxMin(float precios[], char nombres[][50], int cantidad);

#endif
