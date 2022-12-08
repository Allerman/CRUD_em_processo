#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "cabecalho.h"
#include <stdlib.h>
#include "dados.h"

void ler(cadastro *pessoas) {
  printf(
      "\n================================================================\n");
  printf("\t\t\tEXIBIR CADASTRO");
  printf("\n============================================================="
         "===\n");
  printf("O nome da pessoa é: %s\n", pessoas->nome);
  printf("O codigo da consulta é: %i\n", pessoas->cod_cons);
  printf("O nome do hospital é: %s\n", pessoas->hospital);
  printf("A data da consulta é: %s\n", pessoas->data);

  sleep(8);
  system("pause");
  system("clear");
}