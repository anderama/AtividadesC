#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Habilitando acentua��o.
    setlocale(LC_ALL, "");

    // Declarando as vari�veis.
    int numero;
    int i;

    //Recebendo os valores.
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    //Estrutura de repeti��o.
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
		printf ("\nN�mero inv�lido!");
	}
return 0;
}
