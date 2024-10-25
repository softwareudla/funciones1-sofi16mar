#include <stdio.h>
#include <string.h>
#include "funciones.h"

#define maxproduc 10

int main() {
    char nombres[maxproduc][50];
    float precios[maxproduc];    
    int cantidades[maxproduc];   
    int cantidad;                 

    // Bucle para evitar que se ingresen cantidades negativas
    do {
        printf("Ingrese la cantidad de productos (maximo 10 productos): ");
        scanf("%d", &cantidad);
        if (cantidad < 0) {
            printf("La cantidad de productos no puede ser negativa. Intente de nuevo.\n");
        }
    } while (cantidad < 0); // Repite hasta que se ingrese un número no negativo

    getchar(); 

    if (cantidad > maxproduc) {
        printf("La cantidad no esta dentro del límite de productos.\n");
        return 1;
    }

    ingresarProducto(nombres, precios, cantidades, cantidad);
    mostrarProductos(nombres, precios, cantidades, cantidad);
    printf("Precio total: %.2f\n", calcTotal(precios, cantidades, cantidad));
    printf("Precio promedio: %.2f\n", calcPromedio(precios, cantidades, cantidad));

    char nombreBusqueda[50];
    printf("Ingrese el nombre del producto que desea buscar: ");
    fgets(nombreBusqueda, 50, stdin);
    buscarProducto(nombreBusqueda, nombres, precios, cantidades, cantidad);

    return 0;
}
