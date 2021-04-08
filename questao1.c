/*Construa um programa que implemente uma struct funcionário. Implemente a função "calcula bonus". Essa função deve receber um vetor de funcionários e um inteiro com o tamanho desse vetor, e baseados nos cargos dos funcionários ajustar os salários calculados seguindo a seguinte regra: Cargo 1: Diretor salario + 15%; Cargo 2: Gerente salário + 10%; Cargo 3: Supervisor salário + 5%.Na função principal peça ao usuário informar o salário de 10 funcionários e calcule o bonus deles.*/

#include <stdio.h>
#include <stdlib.h>

int main()

typedef struct funcionario
{
    int matricula;
    float salario;
    int cargo;
    printf("Informe o salário de 10 funcionários: ")
    scanf("%f%f%f%f%f%f%f%f%f%f", salario, salario, salario, salario, salario, salario, salario, salario, salario, salario);
    printf("Bonus do funcionario 1: R$ %.2f\nBonus do funcionario 2: R$ %.2f\nBonus do funcionario 3: R$ %.2f\nBonus do funcionario 4: R$ %.2f\nBonus do funcionario 5: R$ %.2f\nBonus do funcionario 6: R$ %.2f\nBonus do funcionario 7: R$ %.2f\nBonus do funcionario 8: R$ %.2f\nBonus do funcionario 9: R$ %.2f\nBonus do funcionario 10: R$ %.2f", salario*1.1, salario*1.1,salario*1.1,salario*1.1,salario*1.1,salario*1.1,salario*1.1,salario*1.1,salario*1.1,salario*1.1);    
}
 

{
    float salario;
    printf("Informe o salário: R$ ");
    scanf("%f", &salario);
    printf("O salário do diretor é R$ %.2f\nO salário do gerente é R$ %.2f\nO salário do supervisor é R$ %.2f\n", salario*1.15, salario*1.1, salario*1.05);        
        
}
