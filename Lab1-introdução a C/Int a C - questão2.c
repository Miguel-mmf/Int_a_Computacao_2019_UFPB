#include <stdio.h>

//Fazer um programa que obtenha dois n�meros inteiros, x e y, mostre o quociente e o resto da divis�o inteira entre eles.
int main()
{
    int x,y;

    printf("Digite dois numeros:");
    scanf("%d %d", &x,&y);

    printf("%d / %d = %.2f",x,y,(float) x/y);

    return 0;
}
