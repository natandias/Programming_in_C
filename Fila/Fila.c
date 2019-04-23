#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"


Fila* fila_cria(){
    Fila*f = (Fila*)malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

void fila_insere(Fila* f, float v){
   Lista*n = (Lista*)malloc(sizeof(Lista));
   n->info = v;
   n->prox = NULL;
   if (f->fim!=NULL) f->fim ->prox = n;
   else f->ini = n;
   f-> fim = n;
}

int fila_vazia(Fila* f){
    return (f->ini==NULL);
}

float fila_retira(Fila* f){
    Lista*t;
    float v;
    if (fila_vazia(f)){
       printf("Fila vazia!!\n");
       exit(1);
    }
    t = f->ini;
    v= t->info;
    f->ini = t->prox;
    if(f->ini==NULL) f->fim = NULL;
    free(t);
    return v;
}

void fila_libera(Fila* f){
    Lista*q = f->ini;
    while (q!=NULL){
        Lista*t = q->prox;
        free(q);
        q=t;
    }
    free(f);
}

void combina_filas(Fila* f_res, Fila* f1, Fila* f2){

    while (!fila_vazia(f1)||!fila_vazia(f2)){
        if(fila_vazia(f1))fila_insere(f_res,fila_retira(f2));
        else if (fila_vazia(f2))fila_insere(f_res,fila_retira(f1));
        else{
            fila_insere(f_res,fila_retira(f1));
            fila_insere(f_res,fila_retira(f2));
        }

    }

}
