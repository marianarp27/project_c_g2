#ifndef FUNCOES_AULAS_H_INCLUDED
#define FUNCOES_AULAS_H_INCLUDED

#include "constantes.h"

tipoAula lerDadosAula();
tipoAula *acrescentaAula(tipoAula vAula[], int *num, tipoUc vetorUc[],int numCodigo);

tipoAula *eliminaAula(tipoAula vAula[], int *num, char designacao[]);
int procuraAulaNome(tipoAula vAula[], int num, char procAula[]);

void  gravaFicheiroBin(tipoAula vAulas[],int num);
tipoAula *lerFicheiroBin(tipoAula vAula[],int *num);
//tipoAula *gravaFicheiroBin(tipoAula vAula[],int *num);

#endif // FUNCOES_AULAS_H_INCLUDED
