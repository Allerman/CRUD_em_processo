#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "cabecalho.h"
#include <stdlib.h>
#include "dados.h"

void ler(cadastro *pessoas) {
  printf(
      "\n================================================================\n");
  printf("\t\t\t\t\t\t EXIBIR CADASTRO");
  printf("\n============================================================="
         "===\n");
  printf("O código da pessoa é: %s\n", pessoas->hospital);
  printf("O nome da pessoa é: %s\n", pessoas->nome);
  printf("A idade da pessoa é: %i\n", pessoas->cod_cons);
  printf("O e-mail da pessoa é: %s\n", pessoas->data);
  sleep(5);
  system("pause");
  system("clear");
}