#include <stdio.h>
#ifndef CABECALHO
#define CABECALHO

#define TAM 255

typedef struct {
  char nome[TAM];
  char hospital[TAM];
  int cod_cons;
  char data[TAM];
} cadastro;
#endif
