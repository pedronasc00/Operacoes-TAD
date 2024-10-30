#ifndef TRANSACAOBANCARIA_H
#define TRANSACAOBANCARIA_H
#include <time.h>

typedef struct 
{
    int identificador;
    char tipoOp[20];
    double valor;
    time_t timestamp;
}TransacaoB;

void InicializaT(TransacaoB* transacao, int identificador, char *tipoOp, double valor);

int getIdentificador(TransacaoB* transacao);
char* getTipoOp(TransacaoB* transacao);
double getValor(TransacaoB* transacao);
time_t getHoras(TransacaoB* transacao);

void setIdentificador(TransacaoB* transacao, int indentificador);
void setTipoOp(TransacaoB* transacao, char *tipoOp);
void setValor(TransacaoB* transacao, double valor);

#endif