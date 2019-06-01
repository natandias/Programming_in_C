#include <stdio.h>
#include <stdlib.h>
#include "BTree.h"
#define MAXITENS 20

int main()
{
    int i, Chave;
    BTree* raiz, *Buscado;
    raiz = NovaBTree();
    for(i = 0; i < MAXITENS; i++)
    {
        Chave = (rand() % (MAXITENS * 5));
        if(BuscaBTree(raiz, Chave) == NULL)
            raiz = InsereBTree(raiz, Chave);
    }

    Imprime(raiz);

    printf("Altura = %d\n\n", Altura(raiz));
    printf("MenorChave = %d\n\n", MenorChave(raiz));

    printf("Chave para buscar: ");
    scanf("%d", &Chave);
    Buscado = BuscaBTree(raiz, Chave);
    printf("\n");

    if(Buscado == NULL)
    {
        printf("Chave nao encontrada!!\n");
    }
    else
    {
        printf("Chave Encontrada!!\n");
        printf("Em %d\n", Buscado->Chaves[0]);
    }

    return 0;
}
