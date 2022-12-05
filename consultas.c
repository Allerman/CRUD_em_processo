#include "dados.h"
#include "menu.h"
#include "cabecalho.h"
#include "create.h"
#include "read.h"
#include "update.h"
#include "delete.h"  

#include <unistd.h>
#include <stdio.h>

#define create 1
#define read 2
#define update 3
#define delete 4
#define exit 5

int main() {
  cadastro pessoas[255];
  int opcao = 0;
  

  while (opcao != 5) {
    opcao=menu();

    switch (opcao){
        case create:
        system("clear");
        criar(&pessoas[0]);
        break;

        case read:
        system("clear");
        ler(&pessoas[0]);
        break;

        case update:
        system("clear");
        alterar(&pessoas[0]);
        break;

        case delete:
        system("clear");
        deletar(&pessoas[0]);
        break;

        case exit:
        break;

        default:
        printf("opcao invalida\n");
    }
  }
  
}