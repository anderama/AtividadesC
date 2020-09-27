#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int numero;

    printf("\nDigite um número para saber se ele é Par ou Ímpar: \n\n");
    scanf("%d", &numero);

        if(numero % 2 == 0) {
            printf("\nO número %d é par!", numero);
        } else {
            printf("\nO número %d é ímpar!", numero);
        }
return 0;
}
