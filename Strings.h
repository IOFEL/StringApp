/*
 ============================================================================
 Name        : Strings.h
 Author      : Elio Flores
 Description : Encabezado de Strings.c
 ============================================================================
 */

#ifndef STRINGS_H
#define STRINGS_H

#include <glob.h>
#include <stdio.h>
#include <stdbool.h>

typedef char*  String;

const String concatenar( const String, const String);

const String copiar(const String);

bool sonIguales(const String, const String);

size_t longitud(const String);

bool esVacia(const String);


#endif //STRINGS_H
