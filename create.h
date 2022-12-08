#include "dados.h"
#include <string.h>
#include <unistd.h>
#include "cabecalho.h"
#include <stdlib.h>
#include <stdio.h> 

int criar(cadastro *pessoa){

/* tentativa diferenciada
char nome[TAM]= pessoa->nome;
char hospital[TAM]= pessoa->hospital;
char cod_cons[TAM]= pessoa->cod_cons;
char data[TAM]= pessoa->data 

printf("..................\n cadastro \n ..................\n");

    printf("digite o nome da pessoa: ");
    fgets(nome, TAM, stdin);
    
    printf("digite o nome do hospital: ");
    fgets(hospital, TAM, stdin);
    
    printf("digite o codigo da consulta: ");
    scanf(cod_cons, TAM, stdin);
    
    printf("digite a data da consulta: ");
    fgets(data, TAM, stdin);*/ 

printf("..................\n cadastro \n ..................\n");

    printf("digite o nome da pessoa: ");
    fgets(pessoa->nome, TAM, stdin);
    
    printf("digite o nome do hospital: ");
    fgets(pessoa->hospital, TAM, stdin);
    
    printf("digite o codigo da consulta: ");
    scanf(pessoa->cod_cons, TAM, stdin);
    
    printf("digite a data da consulta: ");
    fgets(pessoa->data, TAM, stdin);

char printf("\n\tCadastro de consulta feito com sucesso!\n");

sleep(3);
system("pause");
system("clear");

return 0;
}