#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Habilitando acentuação.
    setlocale(LC_ALL, "");

    // Declarando as variáveis.
    int numero;
    int i;

    //Recebendo os valores.
    printf("Digite um número: ");
    scanf("%d", &numero);

    //Estrutura de repetição.
    if (numero == 0 || numero == 1) {
    	printf ("%d! = %d", numero, numero);
	}
	else if (numero > 0) {
		for (i = numero - 1; i != 0; i--) {
			printf ("%d! * %d! = ", numero, i);
            numero *= i;
		}
	printf ("%d", numero);
	}
	else {
		printf ("\nNúmero inválido!");
	}
return 0;
}
