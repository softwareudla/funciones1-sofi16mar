#include <stdio.h>
#include "funciones.h"

#define maxproduc 10

int main() {
    char nombres[maxproduc][50];
    float precios[maxproduc];    
    int cantidades[maxproduc];   
    int cantidad;                 

    printf("Ingrese la cantidad de productos (maximo 10 productos): ");
    scanf("%d", &cantidad);
    getchar(); 

    if (cantidad > maxproduc) {
        printf("La cantidad excede el limite de productos.\n");
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
