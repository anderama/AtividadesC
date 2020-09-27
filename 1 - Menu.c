#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    //Código para habilitar acentuação.
    setlocale(LC_ALL, "");

    //Variável declarada.
    int opcao;

    // Estrutura de repetição.

    do{
        printf("\nOpção 1 \n\n");
        printf("\nOpção 2 \n\n");
        printf("\nOpção 3 \n\n");
        printf("\nOpção 4 \n\n");
        printf("\nOpção 5 \n\n");
        printf("\nOpção 6 \n\n");
        printf("\nOpção 7 \n\n");
        printf("\nOpção 8 \n\n");
        printf("\nOpção 9 \n\n");
        printf("\nTecle 0 para encerrar. \n\n");
        scanf("%d", &opcao);

            switch(opcao) {
        case 0:
            printf("Muito obrigado por utilizar o meu programa!");
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        default:
            printf("\nOpção inválida!\n\nEscolha novamente uma opção!\n\n");
}
        }while(opcao != 0);


    }
