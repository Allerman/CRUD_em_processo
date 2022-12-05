#include <stdio.h>
#ifdef DADOS
#define DADOS
#define TAM 260

typedef struct {
int cod_cons;
char nome[TAM], data[TAM], hospital[TAM];
}
cadastro;

#endif