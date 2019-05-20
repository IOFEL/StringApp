/*
 ============================================================================
 Name        : Strings.c
 Author      : Elio Flores
 Description : Implementacion de Strings.h
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include "Strings.h"


const String copiar(const String cadena){
    size_t l = longitud(cadena);
    const String copia = malloc((l+1)*sizeof(char));
    if(copia) return NULL;
    size_t index = 0;
    while (index<l){
        copia[index] = cadena[index];
        index++;
    }
    copia[index] = '\0';
    return copia;
}

const String concatenar(const String primera, const String segunda){
    size_t longitud_resultado = longitud(primera)+longitud(segunda);
    const String resultado = malloc((longitud_resultado+1)*sizeof(char));
    if(resultado==NULL){
        printf("ERROR: no hay memoria.");
        return NULL;
    }

    int index=0;
    for(int j = 0;index< longitud(primera);j++){
        resultado[index] = primera[j];
        index++;
    }
    for(int k = 0; k < longitud(segunda); k++){
        resultado[index] = segunda[k];
        index++;
    }

    resultado[index] = '\0';
    return resultado;
}


size_t longitud(const String cadena){
    size_t longitud = 0;
    while(cadena[longitud]!='\0'){
        longitud++;
    }
    return longitud;
}


bool esVacia(const String cadena){
    return cadena[0]=='\0';
}


bool sonIguales(const String cadena1, const String cadena2){
  if(longitud(cadena1)!=longitud(cadena2)){
    return false;
  }
  size_t indice = 0;
  while(indice<longitud(cadena1)){
    if(cadena1[indice]!=cadena2[indice]){
      return false;
    }
    indice++;
  }
  return true;
}
