#include <stdio.h>

/*O pre�o de um autom�vel � calculado pela soma do pre�o de f�brica com o pre�o dos impostos (45% do pre�o de f�brica) e
a porcentagem do revendedor (28% do pre�o de f�brica).Fazer um algoritmo que leia o nome do autom�vel e o pre�o
de f�brica. Calcule e mostre o pre�o final do carro.*/

int main()
{
    float p, i, r;
    char n[10];

    printf("escreva o nome do seu carro:\n");
    scanf("%s",&n);
    printf("escreva o valor de fabrica do seu carro:\n");
    scanf("%f",&p);

    i=p*0.45;
    r=p*0.28;

    printf("O carro do modelo %s custa %.2f",n,p+i+r);

    return 0;
}
