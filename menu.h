
#include <stdio.h> 

int menu(){
    int opcao1 = 0;
    char opcoespossiveis[5][260] = {"\n 1-cadastrar consulta;\n 2-ver consultas;\n 3-alterar consultas;\n 4-deletar consultas;\n 5-sair\n"};
        printf("\n================================================================\n");
        printf("\t\t\tBEM-VINDO AO MENU");
        printf("\n================================================================\n");
        printf("Escolha uma das opções a seguir:\n");

        for (int i=0; i<10;i++){
            printf("%s",opcoespossiveis[i]);

            printf("\nEscolha: ");
            scanf("%i",&opcao1);

            return opcao1;
        }
}