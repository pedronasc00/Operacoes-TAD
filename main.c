#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "ListaTransacao.h"

int main() {
    ListaT *listaTransferencias = (ListaT*)malloc(sizeof(ListaT));
    TransacaoB transferencia;
    int Identificador;
    char tipoOP[20];
    double valor;
    Apontador p=2;

    FLVazia(listaTransferencias);

    printf("TRANSACOES: \n");
    for (int i = 0; i < 2; i++)
    {
        Identificador++;
        printf("Tipo da operacao: ");
        fgets(tipoOP, sizeof(tipoOP), stdin);
        tipoOP[strcspn(tipoOP, "\n")] = '\0';
        setTipoOp(&transferencia, tipoOP);
        printf("Valor da operacao: ");
        scanf("%lf", &valor);
        setValor(&transferencia, valor);
        getchar();

        InicializaT(&transferencia, Identificador, tipoOP, valor);
        LInsere(listaTransferencias, transferencia);
    }
    
    LImprime(listaTransferencias);
}