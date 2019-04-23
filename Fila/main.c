#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
int main()
{
    float v;
    Fila*f_res = fila_cria();
    Fila*f2 = fila_cria();
    Fila*f1 = fila_cria();
    fila_insere(f1,10);
    fila_insere(f1,20);
    fila_insere(f1,30);
    fila_insere(f2,40);
    fila_insere(f2,50);
    fila_insere(f2,60);


    return 0;
}
