#include <stdio.h>
#include <string.h>
#include "funciones.h"

// Ingresar los Productos
void ingresarProducto(char nombres[][50], float precios[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el nombre del producto %d: ", i + 1);
        scanf("%s", nombres[i]);
        printf("Ingrese el precio del producto %d: ", i + 1);
        scanf("%f", &precios[i]);
    }
}

// Mostrar los Productos
void mostrarProductos(char nombres[][50], float precios[], int cantidad) {
    printf("Productos ingresados:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("Producto: %s, Precio: %.2f\n", nombres[i], precios[i]);
    }
}

// Calcular Precio Total
float calcTotal(float precios[], int cantidad) {
    float total = 0;
    for (int i = 0; i < cantidad; i++) {
        total += precios[i];
    }
    return total;
}

// Calcular el Precio Promedio
float calcPromedio(float precios[], int cantidad) {
    if (cantidad == 0) return 0;
    return calcTotal(precios, cantidad) / cantidad;
}

// Buscar por nombre
void buscarProducto(char nombreBuscado[], char nombres[][50], float precios[], int cantidad) {
    int encontrado = 0;
    for (int i = 0; i < cantidad; i++) {
        if (strcmp(nombres[i], nombreBuscado) == 0) {
            printf("El precio del producto %s es: %.2f\n", nombres[i], precios[i]);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Producto no encontrado.\n");
    }
}

// Encontrar el producto más caro y el más barato
void encontrarMaxMin(float precios[], char nombres[][50], int cantidad) {
    int maxIdx = 0, minIdx = 0;
    for (int i = 1; i < cantidad; i++) {
        if (precios[i] > precios[maxIdx]) maxIdx = i;
        if (precios[i] < precios[minIdx]) minIdx = i;
    }
    printf("Producto más caro: %s con precio %.2f\n", nombres[maxIdx], precios[maxIdx]);
    printf("Producto más barato: %s con precio %.2f\n", nombres[minIdx], precios[minIdx]);
}
