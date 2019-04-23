#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
struct lista{
    float info;
    struct lista*prox;
};
typedef struct lista Lista;
struct fila{
    Lista*ini;
    Lista*fim;
};
typedef struct fila Fila;

Fila*fila_cria();
void fila_insere(Fila*f,float v);
float fila_retira(Fila*f);
int fila_vazia(Fila*f);
void fila_libera(Fila*f);

#endif // FILA_H_INCLUDED
