#include <stdio.h>>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float numBase = 0.0, numPotencia = 0.0, resultado = 0.0;

    printf("Digite uma base a ser potencializada: \n");
    scanf("%f", &numBase);
    printf("Digite uma potência: \n");
    scanf("%f", &numPotencia);

    resultado = pow(numBase, numPotencia);

    printf("%.2f elevado a %.2f é: %.2f. \n", numBase, numPotencia, resultado);

    return 0;
}
