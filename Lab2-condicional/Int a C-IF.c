#include <stdio.h>
#include <locale.h> //biblioteca para usar acentua��o na execu��o do programa

int main()
{
    int x;

    setlocale(LC_ALL,"Portuguese"); //acentua��o
    printf("digite um valor:\n");
    scanf("%d",&x);

    if(x>0)
        printf("N�mero positivo!");
    else if(x<0)
            printf("N�mero Negativo!");
            else
                printf("ZERO!");

    return 0;
}
