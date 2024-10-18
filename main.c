#include <stdio.h>
#include "funciones.h"

int main() {
    char nombres[maxproduc][50]; 
    float precios[maxproduc];     
    int cantidad;                

    // Pedir la cantidad de productos
    printf("Ingrese la cantidad de productos (maximo 10 productos): ");
    scanf("%d", &cantidad);

    if (cantidad > maxproduc) {
        printf("La cantidad excede el limite de productos.\n");
        return 1; 
    }

    // Ingresar los productos
    ingresarProducto(nombres, precios, cantidad);

    // Mostrar productos ingresados
    mostrarProductos(nombres, precios, cantidad);

    // Calcular y mostrar el precio total
    printf("Precio total: %.2f\n", calcTotal(precios, cantidad));

    // Calcular y mostrar el precio promedio
    printf("Precio promedio: %.2f\n", calcPromedio(precios, cantidad));

    // Buscar un producto por su nombre
    char nombreBusqueda[50];
    printf("Ingrese el nombre del producto que desea buscar: ");
    scanf("%s", nombreBusqueda);
    buscarProducto(nombreBusqueda, nombres, precios, cantidad);

    // Encontrar el producto más caro y el más barato
    encontrarMaxMin(precios, nombres, cantidad);

    return 0;
}
