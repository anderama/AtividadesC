#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int pa = 0;
    int quantidade, razao;

    printf ("Digite a quantidade de elementos da PA: ");
    scanf ("%d", &quantidade);
    printf ("Digite a razao da PA: ");
    scanf ("%d", &razao);

    for (int i = 1; i <= quantidade; i++) {
        if(i == quantidade){
            printf ("%d!", pa);
            break;
        }
        printf ("%d, ", pa);
        pa += razao;
    }

    return 0;
}
