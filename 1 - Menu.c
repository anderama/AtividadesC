#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    //C�digo para habilitar acentua��o.
    setlocale(LC_ALL, "");

    //Vari�vel declarada.
    int opcao;

    // Estrutura de repeti��o.

    do{
        printf("\nOp��o 1 \n\n");
        printf("\nOp��o 2 \n\n");
        printf("\nOp��o 3 \n\n");
        printf("\nOp��o 4 \n\n");
        printf("\nOp��o 5 \n\n");
        printf("\nOp��o 6 \n\n");
        printf("\nOp��o 7 \n\n");
        printf("\nOp��o 8 \n\n");
        printf("\nOp��o 9 \n\n");
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
            printf("\nOp��o inv�lida!\n\nEscolha novamente uma op��o!\n\n");
}
        }while(opcao != 0);


    }
