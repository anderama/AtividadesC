#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int i;
    int quantidade, razao;

    printf ("Digite a quantidade de elementos da PG: ");
    scanf ("%d", &quantidade);
    printf ("Digite a razao da PG: ");
    scanf ("%d", &razao);

    for (i = 1; i <= quantidade; i *= razao) {
        printf("%d, ", i);
    }

    printf("%d.", i);

    return 0;
}
