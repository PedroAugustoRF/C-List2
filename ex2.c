#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float numReal = 0.0, numRaiz = 0.0;

    printf("Digite um número real qualquer: \n");
    scanf("%f",&numReal);

    numRaiz = sqrt(numReal);

    printf("A raiz quadrada de %.2f é %.2f.\n", numReal, numRaiz);

    return 0;
}
