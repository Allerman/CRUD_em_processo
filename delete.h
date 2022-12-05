#include "cabecalho.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "dados.h"

int deletar(cadastro *pessoa) {
  system("clear");
  printf(
      "\n================================================================\n");
  printf("\t\t\t\t\t\tEXCLUIR CADASTRO");
  printf(
      "\n================================================================\n");
  memset(&pessoa->nome, 0, sizeof(cadastro));
  memset(&pessoa->cod_cons, 0, sizeof(cadastro));
  memset(&pessoa->hospital, 0, sizeof(cadastro));
  memset(&pessoa->data, 0, sizeof(cadastro));
  sleep(1);
  printf("\tCadastro removido com sucesso!");
  system("clear");
}
