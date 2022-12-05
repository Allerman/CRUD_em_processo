#include "dados.h"
#include <string.h>
#include <unistd.h>
#include "cabecalho.h"
#include <stdlib.h>
#include <stdio.h> 

int criar(cadastro *pessoa){

printf("..................\n cadastro \n ..................\n");
printf("digite o nome da pessoa: ");
scanf(" %s", pessoa->nome);

printf("digite o nome do hospital: ");
scanf(" %s", pessoa->hospital);

printf("digite o codigo da consulta: ");
scanf(" %i", &pessoa->cod_cons);

printf("digite a data da consulta: ");
scanf(" %s", pessoa->data);

printf("\tCadastro de consulta feito com sucesso!\n");

sleep(5);
system("pause");
system("clear");

return 0;
}