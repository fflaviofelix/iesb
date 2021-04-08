/*Escreva um programa que mostre o número de experimentos feitos com sapos, ratos e coelhos, s, indicando o tipo de cobaia utilizada e a quantidade de cobaias em cada experimento, em números absoluto e percentual.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char 'S', 'R', 'C';
    int sapo, rato, coelho, total, ts, tr, tc ;
    float ps, pr, pc;
    
        
    total = sapo + rato + coelho;
    tc = coelho;
    tr = rato;
    ts = sapo;
    
    ps = sapo/total;
    pr = rato/total;
    pc = coelho/total;

    printf("Informe o tipo de cobaia, se S(sapo), R(rato) ou C(coelho): ");
    scanf("%c%c%c", S, R, C); 
    printf("Informe a quantidade de cobaias: ");
    scanf("%d%d%d", sapo, rato, coelho);
    printf("Total de cobaias: %d", total);
    printf("Total de sapos: %d",ts);    
    printf("total de ratos: %d", tr);    
    printf("Total de coelhos: %d", tc);    
    printf("Percentual de sapos: %.2f", ps);
    printf("Percentual de ratos: %.2f", pr);
    printf("Percentual de coelhos; %.2f", pc);

    return 0;
}

