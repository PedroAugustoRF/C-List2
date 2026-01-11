#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char resposta;
    bool booleano;

    printf("Você já programou em linguagem C antes da nossa disciplina? Digite S ou s caso já tenha e N ou n caso não tenha. \n");
    scanf("%c", &resposta);

    if(resposta == 'S' || resposta == 's'){
        booleano = true;
    }
    else if(resposta == 'N' || resposta == 'n'){
        booleano = false;
    }
    else{
        printf("Resposta inválida. \n");
    }
    return 0;

}


