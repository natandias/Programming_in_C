#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    float top;
    float v;
    Pilha *p1 = pilha_criar();
    pilha_push(p1, 10);
    pilha_push(p1, 20);
    pilha_push(p1, 30);
    pilha_push(p1, 40);
    pilha_push(p1, 50);

    Pilha *p2 = pilha_criar();
    pilha_push(p2, 15);
    pilha_push(p2, 25);
    pilha_push(p2, 35);
    pilha_push(p2, 45);
    pilha_push(p2, 55);


   /*while (!pilha_vazia(p1))
    {
        v = pilha_pop(p1);
        printf("%lf\n", v);
    }*/

    concatena_pilhas(p1, p2);
    copia_pilha(p1);



    pilha_libera(p1);
    return 0;

}
