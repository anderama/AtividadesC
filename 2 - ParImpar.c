#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int numero;

    printf("\nDigite um n�mero para saber se ele � Par ou �mpar: \n\n");
    scanf("%d", &numero);

        if(numero % 2 == 0) {
            printf("\nO n�mero %d � par!", numero);
        } else {
            printf("\nO n�mero %d � �mpar!", numero);
        }
return 0;
}
