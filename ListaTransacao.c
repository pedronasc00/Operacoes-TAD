#include <stdio.h>
#include "ListaTransacao.h"

void FLVazia(ListaT* listas){
    listas->first = InicioArranjo;
    listas->last = listas->first;
}

int LEhVazia(ListaT* listas){
    return (listas->last == listas->first);
}

int LInsere(ListaT* listas, TransacaoB x){
    if(listas->last == MaxTam) return 0;
    listas->TranB[listas->last++] = x;
    return 1;
}

int LRetira(ListaT* listas, Apontador p, TransacaoB *pX){
    int cont;
    if (LEhVazia(listas) || p >= listas->last || p < 0) return 0;
    *pX = listas->TranB[p];
    listas->last--;
    for (cont = p+1; cont <= listas->last; cont++)
        listas->TranB[cont - 1] = listas->TranB[cont];
    return 1;
}

void LImprime(ListaT* listas){
    int i;
    struct tm *timeinfo;
    
    printf("\n\nTransacoes: \n");
    for(i = listas->first; i < listas->last; i++){
        printf("\nIdentificador: %d\n", listas->TranB[i].identificador);
        printf("Tipo da operacao: %s\n", listas->TranB[i].tipoOp);
        printf("Valor da operacao: %.2lf\n", listas->TranB[i].valor);
        
        timeinfo = localtime(&listas->TranB[i].timestamp);
        printf("Horario da transacao: %02d:%02d:%02d\n", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
    }
}