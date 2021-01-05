#ifndef contantes
#define contantes

#define MAX_ALUNOS 100
// #define MAX_UC 40
#define MAX_UC 3
#define MAX_STRING 100
#define MAX_CODIGO 7
#define MAX_AULAS 50

typedef struct{
    int dia, mes, ano;
} tipoData;


typedef struct{
    char nome[MAX_STRING];
    int numero;
} tipoEstudante;


typedef struct{
    char designacao[MAX_STRING];
    int codigo[MAX_CODIGO];
    char tipoAula;
    char docente[MAX_CODIGO];
    tipoData data;
    char estadoAula[MAX_CODIGO];
} tipoUc;


typedef struct{
    char designacao[MAX_AULAS];
    char tipoDeAula;
    char docente[MAX_AULAS];
    tipoData data;
    float hora;
    char estadoAula;
    int gavacao;
    int codigo; //chave primaria UCs
} tipoAula;


#endif // contantes
