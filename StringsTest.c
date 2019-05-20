/*
 ============================================================================
 Name        : StringsTest.c
 Author      : Elio Flores
 Description : Genera el programa de Testeo
 ============================================================================
 */


#include <assert.h>
#include <stdio.h>
#include "Strings.h"

int main(){


  //Se prueba esVacia
  assert(!esVacia("Esta cadena no esta vacia."));
  assert(esVacia(""));

  //Se prueba longitud
  assert(longitud("hola")==4);
  assert(longitud("")==0);

  //Se prueba concatenar
  assert(sonIguales(concatenar("hola y"," chau"),"hola y chau"));
  assert(!sonIguales(concatenar("UTN","FRBA"),"UTNBA"));
  assert(sonIguales(concatenar("UTN",""),"UTN"));

  return 0;
}
