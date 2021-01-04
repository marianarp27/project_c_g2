#include <stdio.h>
#include <ctype.h>
#include "constantes.h"
#include "funcoes_auxiliares.h"
#include "funcoes_menus.h"
#include "funcoes_aulas.h"



char menu(){
    char opcao;
    printf("\n\n************************ Menu Principal ************************");
    printf("\nQuantidade de UC's: **** \tQnt. aulas agendadas: ** horas  \nQnt. aulas realizadas: **** \tQnt. aulas gravadas: ****\n");
    printf("\n U - Unidades Curriculares\n A - Aulas online\n R - Raking\n E - Estatística");
    printf("\n S - Salas de Aula online\n F - Fechar Programa\n\n Insira Opção ->");
    scanf(" %c", &opcao);
    limpaBufferStdin();
    opcao = toupper(opcao);
    return opcao;
}

char menuAulas(){
    char opcao;
    printf("\n\n ----------------- Menu das Aulas Online -----------------");
    printf("\n L - Listar Aulas\n A - Agendar Aula\n M - Modificar Aula");
    printf("\n V - Voltar\n\n Insira Opção ->");
    scanf(" %c", &opcao);
    limpaBufferStdin();
    opcao = toupper(opcao);
    return opcao;
}

char submenuAulas(){
    char opcao;
    printf("\n\n ****------------**** Modificar Aula ****------------****");
    printf("\n E - Eliminar Aula \n A - Alterar Agendamento");
    printf("\n V - Voltar\n\n Insira Opção ->");
    scanf(" %c", &opcao);
    limpaBufferStdin();
    opcao = toupper(opcao);
    return opcao;
}






/*
void menuAulas(){
    char opcao1;

    do{
    printf("\n\n ----------------- Menu das Aulas Online -----------------");
    printf("\n L - Listar Aulas\n A - Agendar Aula\n M - Modificar Aula");
    printf("\n V - Voltar\n\n Insira Opção ->");
    scanf(" %c", &opcao1);
    limpaBufferStdin();
    opcao1 = toupper(opcao1);

        switch(opcao1){
            case 'L':   printf("Escolheu a opção de Listar Aulas");
            break;
            case 'A':   printf("Escolheu a opção de Agendar uma Aula");
                        adicionarAula();
            break;
            case 'M':   //printf("Escolheu a opção de Modificar uma Aula");
                        submenuAulas();
            break;
            case 'V':   menu();
            break;
            default:    printf("\n\n Opção Inválida! Tente Novamente...\n\n");
                        menuAulas();
        }

    }while(opcao1 != 'V');

}*/
/*
void submenuAulas(){
    char opcao3;
    do{
    printf("\n\n ****------------**** Modificar Aula ****------------****");
    printf("\n E - Eliminar Aula \n A - Alterar Agendamento");
    printf("\n V - Voltar\n\n Insira Opção ->");
    scanf(" %c", &opcao3);
    limpaBufferStdin();
    opcao3 = toupper(opcao3);

        switch(opcao3){
            case 'E':   printf("Escolheu a opção de Eliminar uma Aula");
            break;
            case 'A':   printf("Escolheu a opção de Alterar um Aula Agendada");
            break;
            case 'V':   menuAulas();
            break;
            default:    printf("\n\n Opção Inválida! Tente Novamente...\n\n");
                        submenuAulas();
        }
    }while(opcao3 != 'V');
}

*/

