#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "cabecalho.h"
#include <stdlib.h>
#include "dados.h"

int alterar(cadastro *pessoas) {
  int opcao;
  char opcaopossiveis[4][30] = {"\n1 - Alterar Código\n", "2 - Alterar Nome\n",
                                "3 - Alterar Hospital\n", "4 - Alterar Data\n"};
  printf(
      "\n================================================================\n");
  printf("\t\t\t\t\t\tALTERAR CADASTRO");
  printf(
      "\n================================================================\n");
  printf("Escolha uma das opções a seguir:\n");

  for (int i = 0; i < 10; i++) {
    printf("%s", opcaopossiveis[i]);
  }

  printf("\nEscolha: ");

  scanf(" %i", &opcao);
  switch (opcao) {
  case 1:
    system("clear");
    printf("\nDigite o novo código da consulta: ");
    scanf(" %i", &pessoas->cod_cons);
    printf("\nAlterado com sucesso!");
    sleep(1);
    system("clear");

    break;

  case 2:
    system("clear");
    printf("\nDigite o novo nome da pessoa: ");
    scanf(" %s", pessoas->nome);
    printf("\nAlterado com sucesso!");
    sleep(1);
    system("clear");

    break;
  case 3:
    system("clear");
    printf("\nDigite o novo nome do hospital: ");
    scanf(" %s", pessoas->hospital);
    printf("\nAlterado com sucesso!");
    sleep(1);
    system("clear");

    break;
  case 4:
    system("clear");
    printf("\nDigite a nova data da consulta: ");
    scanf(" %s", pessoas->data);
    sleep(1);
    printf("\nAlterado com sucesso!");
    system("clear");

    break;
  }
  return opcao;
}