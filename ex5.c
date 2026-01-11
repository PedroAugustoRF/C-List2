#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    const int Grat = 5;
    const int Imp = 7;
    float salarioFuncionario = 0.0, gratificacao = 0.0, salarioGrat = 0.0, imposto = 0.0, salarioFinal = 0.0;

    printf("Qual salário do funcionário? \n");
    scanf("%f", &salarioFuncionario);

    gratificacao = (salarioFuncionario * Grat)/100;
    salarioGrat = salarioFuncionario + gratificacao;

    imposto = (salarioGrat*Imp)/100;
    salarioFinal = salarioGrat - imposto;

    printf("Contando a gratificação e descontando os impostos, o salário do funcionário será: %.2f", salarioFinal);

    return 0;
}
