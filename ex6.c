#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(){

    // Caraca Sandrão, essa aqui foi de lascar

    setlocale(LC_ALL, "Portuguese");

    char dataSist[9];
    char anoSist[3];
    char mesSist[3];
    int ano = 0, mes = 0, anoAtualYY = 0, anoAtualYYYY = 0, mesAtual = 0, idade = 0, idade50 = 0;

    _strdate(dataSist);

    anoSist[0] = dataSist[6];
    anoSist[1] = dataSist[7];
    anoSist[2] = '\0';

    anoAtualYY = atoi(anoSist);
    anoAtualYYYY = anoAtualYY + 2000;

    mesSist[0] = dataSist[0];
    mesSist[1] = dataSist[1];
    mesSist[2] = '\0';

    mesAtual = atoi(mesSist);

    printf("Em qual ano \"AAAA\" você nasceu? \n");
    scanf("%d", &ano);
    printf("Em qual mês \"MM\" você nasceu? \n");
    scanf("%d", &mes);

    if (mes <= mesAtual){
        idade = anoAtualYYYY - ano;
        idade50 = idade - (anoAtualYYYY - 2050);

        printf("Você tem %d anos. E em 2050 você terá: %d anos. \n", idade, idade50);
    }
    else{
        idade = (anoAtualYYYY - ano) - 1;
        idade50 = idade - (anoAtualYYYY - 2050);

        printf("Você tem %d anos. E em 2050 você terá: %d anos. \n", idade, idade50);
    }
    return 0;
}
