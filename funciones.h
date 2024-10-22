#ifndef FUNCIONES_H
#define FUNCIONES_H

void ingresarProducto(char nombres[10][50], float precios[10], int cantidades[10], int cantidad);
void mostrarProductos(char nombres[10][50], float precios[10], int cantidades[10], int cantidad);
float calcTotal(float precios[10], int cantidades[10], int cantidad);
float calcPromedio(float precios[10], int cantidades[10], int cantidad);
void buscarProducto(char nombreBuscado[50], char nombres[10][50], float precios[10], int cantidades[10], int cantidad);

#endif // FUNCIONES_H

