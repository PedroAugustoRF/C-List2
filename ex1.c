#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float numReal = 0.0, arredondadoCima = 0.0, arredondadoBaixo = 0.0, parteInteira = 0.0, parteDecimal = 0.0;
    double numInt;

    printf("Digite um número Real: \n");
    scanf("%f", &numReal);

    arredondadoCima = ceil(numReal);
    arredondadoBaixo = floor(numReal);
    parteDecimal = modf(numReal, &numInt);

    printf("Arredondado pra cima: %.2f Arredondado pra baixo: %.2f Só a parte inteira: %.0f Só a parte decimal: %.2f", arredondadoCima, arredondadoBaixo, numInt, parteDecimal);

    return 0;
}


