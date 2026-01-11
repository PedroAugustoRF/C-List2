#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float salarioMinimo = 0.0, kW = 0.0, cadakW = 0.0, valorPagar = 0.0, valorDesconto = 0.0, valorFinal = 0.0;

    printf("Qual o salário minimo atualmente? \n");
    scanf("%f", &salarioMinimo);
    printf("Quandos kW foram consumidas na sua residência esse mês? \n");
    scanf("%f", &kW);

    cadakW = salarioMinimo/5;
    valorPagar = cadakW*kW;
    valorDesconto = (valorPagar*15)/100;
    valorFinal = valorPagar - valorDesconto;

    printf("Você vai pagar R$: %.2f esse mês! \n", valorFinal);


    return 0;
}
