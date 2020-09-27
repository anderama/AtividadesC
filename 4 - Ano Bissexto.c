#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Habilitando acentuação.
    setlocale(LC_ALL,"");
    // Variável
    int ano = 0;
    // Recebendo o valor da variável
    printf("Informe o ano que deseja verificar: ");
    scanf("%d", &ano);

        if(ano % 4 == 0){
            printf("\nO ano %d é um ano bissexto!", ano);
        } else if(ano % 4 != 0) {
            printf("\nO ano %d não é um ano bissexto!", ano);
        } else {
            printf("\nOpção inválida!");
        }


return 0;
}
