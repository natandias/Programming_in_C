#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* pilha_criar()
{
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->n = 0;
    return p;
}

void pilha_push(Pilha *p, float v)
{
    if(p->n == MAX)
    {
        printf("Estouro de Pilha!\n");
        exit(1);
    }

    p->vet[p->n] = v;
    p->n++;

}

float pilha_pop(Pilha *p)
{
    float v;
    if(pilha_vazia(p))
    {
        printf("Pilha_Vazia!\n");
        exit(1);
    }
    v = p->vet[p->n - 1];
    p->n--;
    return v;
}


int pilha_vazia(Pilha* p)
{
    return p->n==0;
}

void pilha_libera(Pilha* p)
{
    free(p);
}

float topo(Pilha* p){
  float v;
  v = pilha_pop(p);
  pilha_push(p,v);
  printf("\nTopo: %.0lf", v);
  return v;
}

void concatena_pilhas(Pilha* p1, Pilha* p2){
    float v; Pilha* Paux=pilha_criar(); float vector[sizeof(Pilha)]; int i=0; Pilha* top=pilha_criar();
    while(!pilha_vazia(p2)){
        v = pilha_pop(p2);
        pilha_push(Paux,v);
    }

    while(!pilha_vazia(Paux)){
        v = pilha_pop(Paux);
        pilha_push(p1,v);
    }

     while (!pilha_vazia(p1))
    {   i++;
        v = pilha_pop(p1);

        printf("%.2lf\n", v);
        vector[sizeof(Pilha)-i] = v;
        pilha_push(top, vector[sizeof(Pilha)-1]);
        pilha_push(Paux, v);
    }

      while(!pilha_vazia(Paux)){
        v = pilha_pop(Paux);
        pilha_push(p1,v);
    }

    topo(top);

    pilha_libera(Paux);
}

Pilha* copia_pilha (Pilha* p){

    float v; Pilha* Paux=pilha_criar(); float vector[sizeof(Pilha)]; int i=0; Pilha* copy=pilha_criar();

    while(!pilha_vazia(p)){
        v = pilha_pop(p);
        pilha_push(Paux,vector[sizeof(Pilha)-i]);
    }

     while (!pilha_vazia(Paux))
    {   i++;
        v = pilha_pop(Paux);
        vector[sizeof(Pilha)-i] = v;
        pilha_push(copy, vector[sizeof(Pilha)-i]);
        pilha_push(p, vector[sizeof(Pilha)-i]);
    }

     printf("\n\nPilha original: \n");
     while (!pilha_vazia(p))
    {
        v = pilha_pop(p);
        printf("%.2lf\n", v);
    }

     printf("\n");

     printf("Pilha copiada: \n");
     while (!pilha_vazia(copy))
    {
        v = pilha_pop(copy);
        printf("%.2lf\n", v);
    }

    pilha_libera(Paux);

}
