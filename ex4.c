#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float raioCirculo = 0.0, areaCirculo = 0.0;

    printf("Digite o raio da circunferência: \n");
    scanf("%f", &raioCirculo);

    areaCirculo = (M_PI)*pow(raioCirculo, 2);

    printf("A área do círculo é: %.2f", areaCirculo);

    return 0;
}
