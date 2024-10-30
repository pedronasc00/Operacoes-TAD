#ifndef LISTATRANSACAO_H
#define LISTATRANSACAO_H
#define InicioArranjo 0
#define MaxTam 1000
#include "TransacaoBancaria.h"

typedef int Apontador;

typedef struct 
{
    TransacaoB TranB[MaxTam];
    Apontador first, last;
}ListaT;

void FLVazia(ListaT* listas);
int LEhVazia(ListaT* listas);
int LInsere(ListaT* listas, TransacaoB x);
int LRetira(ListaT* listas, Apontador p, TransacaoB *pX);
void LImprime(ListaT* listas);
void HorasSistema();

#endif