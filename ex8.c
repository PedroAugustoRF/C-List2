#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float horasTrabalhadas = 0.0, salarioMinimo = 0.0, valorPerHora = 0.0, salarioBruto = 0.0, impostoDeRenda = 0.0, impostoInss = 0.0, salarioFinal = 0.0;

    printf("Quantas horas você trabalhou no mês? \n");
    scanf("%f", &horasTrabalhadas);

    printf("Qual valor do salário mínimo? \n");
    scanf("%f", &salarioMinimo);

    valorPerHora = salarioMinimo/10;
    salarioBruto = horasTrabalhadas*valorPerHora;
    impostoDeRenda = (salarioBruto*3)/100;
    impostoInss = (salarioBruto*11)/100;
    salarioFinal = salarioBruto-impostoDeRenda-impostoInss;

    printf("Seguindo os descontos de IR e do INSS, seu salário vai ser de: %.2f", salarioFinal);

    return 0;
}
