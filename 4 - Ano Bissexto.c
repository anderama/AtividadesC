#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Habilitando acentua��o.
    setlocale(LC_ALL,"");
    // Vari�vel
    int ano = 0;
    // Recebendo o valor da vari�vel
    printf("Informe o ano que deseja verificar: ");
    scanf("%d", &ano);

        if(ano % 4 == 0){
            printf("\nO ano %d � um ano bissexto!", ano);
        } else if(ano % 4 != 0) {
            printf("\nO ano %d n�o � um ano bissexto!", ano);
        } else {
            printf("\nOp��o inv�lida!");
        }


return 0;
}
