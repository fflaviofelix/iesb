/*Existe um erro no código abaixo. Ajuste o código para que o resultado da execução seja:
9,3,3,18,1.*/

#include <stdio.h>
#include <stdlib.h>

int funcao1(int *x, int y);
int funcao2(int y, int x);
int main()

{
    int a,b,c;
    a = 1;
    b = 2;
    c = 3;
    b = funcao1(&c, a);
    printf(" %d%d%d", c, b, a);
    return 0;
}

int funcao1(int *x, int y)

{
    y = funcao1(x, y);
    printf(" %d",*x);
    return y;
}

int funcao2(int y, int x)

{
    y = y * 2;
    x = x * 3;
    printf(" %d", x + y);
    return (x * y);
}
