#include <stdio.h>
#include <ctype.h>

#include "constantes.h"
#include "funcoes_auxiliares.h"


void obtemDados(tipoUc *info){
    int i, j;
    for(i=0; i<MAX_UC; i++) {
        printf("Insira uma disciplina:");
        scanf("%s", &info->designacao[i]);

         for(j=0; j<1; j++) {
        printf("Insira um codigo:");
        scanf("%s", &info->codigo[j]);
    }

    }

}

void escreveDados(tipoUc info[]){
    int i;

    for(i=0; i<MAX_UC; i++) {
        printf("%s\n", info[i]);
    }
}

