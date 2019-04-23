#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#define MAX 50

struct pilha{
    int n;
    float vet[MAX];
};
typedef struct pilha Pilha;

Pilha *pilha_criar();

void pilha_push(Pilha *p, float v);
float pilha_pop(Pilha *p);
int pilha_vazia(Pilha *p);
void pilha_libera(Pilha *p);
float topo (Pilha *p);
void concatena_pilhas (Pilha *p1, Pilha *p2);
Pilha* copia_pilha (Pilha *p);

#endif // PILHA_H_INCLUDED
