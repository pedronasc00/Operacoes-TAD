#include <stdio.h>
#include <string.h>
#include <time.h>
#include "TransacaoBancaria.h"

void InicializaT(TransacaoB* transacao, int identificador, char *tipoOP, double valor){
    transacao->identificador = identificador;
    strcpy(transacao->tipoOp, tipoOP);
    transacao->valor = valor;
    transacao->timestamp = time(NULL);
}

int getIdentificador(TransacaoB* transacao){
    return transacao->identificador;
}
char* getTipoOp(TransacaoB* transacao){
    return transacao->tipoOp;
}
double getValor(TransacaoB* transacao){
    return transacao->valor;
}
time_t getHoras(TransacaoB* transacao){
    return transacao->timestamp;
}

void setIdentificador(TransacaoB* transacao, int identificador){
    transacao->identificador = identificador;
}
void setTipoOp(TransacaoB* transacao, char *tipoOp){
    strcpy(transacao->tipoOp, tipoOp);
}
void setValor(TransacaoB* transacao, double valor){
    transacao->valor = valor;
}