/*
 ============================================================================
 Name        : StringsApp.c
 Author      : Elio Flores
 Description : Genera un especie de interfaz de consola
 ============================================================================
 */

#include <stdio.h>
#include "Strings.h"

int main(){

    char primera[100];
    char segunda[100];

    int opcion;
    printf("Menu: \n");
    printf("1- Ver si la cadena es vacia.\n");
    printf("2- Ver la longitud de la cadena.\n");
    printf("3- Concatenar 2 cadenas.\n");
    printf("4- Ver si dos cadenas son iguales.\n");
    printf("5- Fin.\n\n");

    printf("Ingrese una opcion: ");
    opcion = getchar();
    printf("\n\n");
    switch(opcion){
        case '1':
            printf("Ingrese la palabra: ");
            scanf("%s",primera);
            if(esVacia(primera)){
                printf("Es vacia.");
            }else{
                printf("No es vacia. \nLa palabra es: %s \n", primera);
            }
            break;
        case '2':
            printf("Ingrese la palabra: ");
            scanf("%s",primera);
            printf("La palabra es: %s \nSu longitud es: %zu \n",primera,longitud(primera));
            break;
        case '3':
            printf("Ingrese la primera palabra: ");
            scanf("%s",primera);
            printf("Ingrese la segunda palabra: ");
            scanf("%s",segunda);
            printf("La concatenacion es: %s \n",concatenar(primera,segunda));
            break;
        case '4':
            printf("Ingrese la primera palabra: ");
            scanf("%s",primera);
            printf("Ingrese la segunda palabra: ");
            scanf("%s",segunda);
            if(sonIguales(primera,segunda)){
              printf("Si, son iguales.");
            }else{
              printf("Son diferentes.");
            }
            break;
        case '5':
            printf("Chau.");
            break;
        default:
            printf("Ingrese una opcion valida.\n");
     }

    return 0;
}
