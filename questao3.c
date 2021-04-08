/*Construa uma função que receba 2 números, X e Y, inteiros positivos, > 2, e retorne quantos números primos existem dentro do intervalo fechado entre X e Y. Na sua função principal, solicite ao usuário os valores X e Y e diga quantos primos há entre eles.*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x, y, p, pr, p2, pr2;
    printf("Insira dois números inteiros positivo > 2: ");
    scanf("%d%d", &x, &y);    
    p = x/x;
    pr = x/1;
    p2 = y/y;
    pr2 = y/1;
    if (p == 1 || pr == x)
        printf("%d é primo\n", x);
        else
            printf("%d não é primo\n", x);
    if (p2 == 1 || pr2 == y)
        printf("%d é primo\n", y);
        else 
            printf("%d não é primo\n", y);
}
