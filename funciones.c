#include <stdio.h>
#include <string.h>
#include "funciones.h"

// Ingresar los Productos
void ingresarProducto(char nombres[10][50], float precios[10], int cantidades[10], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el nombre del producto %d: ", i + 1);
        fgets(nombres[i], sizeof(nombres[i]), stdin); 

        do {
            printf("Ingrese el precio del producto %d (no puede ser negativo): ", i + 1);
            scanf("%f", &precios[i]);
            if (precios[i] < 0) {
                printf("El precio no puede ser negativo. Intente de nuevo.\n");
            }
        } while (precios[i] < 0);

        do {
            printf("Ingrese la cantidad del producto %d (no puede ser negativa): ", i + 1);
            scanf("%d", &cantidades[i]);
            if (cantidades[i] < 0) {
                printf("La cantidad no puede ser negativa. Intente de nuevo.\n");
            }
        } while (cantidades[i] < 0);

        getchar(); 
    }
}

// Mostrar los Productos
void mostrarProductos(char nombres[10][50], float precios[10], int cantidades[10], int cantidad) {
    printf("Productos ingresados:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("Producto: %s", nombres[i]); 
        printf("Precio: %.2f, Cantidad: %d\n", precios[i], cantidades[i]);
    }
}

// Calcular Precio Total
float calcTotal(float precios[10], int cantidades[10], int cantidad) {
    float total = 0;
    for (int i = 0; i < cantidad; i++) {
        total += precios[i] * cantidades[i]; 
    }
    return total;
}

// Calcular el Precio Promedio
float calcPromedio(float precios[10], int cantidades[10], int cantidad) {
    if (cantidad == 0) return 0;

    float total = 0;
    int totalCantidad = 0;

    for (int i = 0; i < cantidad; i++) {
        total += precios[i] * cantidades[i];  
        totalCantidad += cantidades[i];        
    }

    return total / totalCantidad;
}

// Buscar por nombre
void buscarProducto(char nombreBuscado[50], char nombres[10][50], float precios[10], int cantidades[10], int cantidad) {
    int encontrado = 0;
    for (int i = 0; i < cantidad; i++) {
        if (strcmp(nombres[i], nombreBuscado) == 0) {
            printf("El precio del producto %s es: %.2f, Cantidad: %d\n", nombres[i], precios[i], cantidades[i]);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Producto no encontrado.\n");
    }
}
