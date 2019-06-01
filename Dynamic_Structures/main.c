#include <stdio.h>
#include <malloc.h>

struct lista{
    int Info;
    struct lista*prox;
};
typedef struct lista Lista;

Lista*ListaCriar(){
    return NULL;
}

Lista*ListaInserir(Lista*l,int v){
    Lista *Novo = (Lista*)malloc(sizeof(Lista));
    Novo -> Info = v;
    Novo -> prox = l;
    return Novo;

}
void *ListaImprimir(Lista*l){
    Lista *p;
    for(p=l; p!=NULL; p = p->prox){
        printf("%d\n", p->Info);
    }

}

Lista* ListaBuscar(Lista*l,int v){
    Lista*p;
    for(p=l;p!=NULL; p = p ->prox){
        if(p->Info == v) return p;
        }
        return NULL;
    }
Lista* ListaRetirar(Lista*l,int v){
    Lista*ant=NULL;
    Lista*p = l;
    while (p!=NULL&&p->Info!= v){
        ant = p;
        p = p-> prox;
    }
    if (p==NULL)return l;
    if (ant==NULL) l= p->prox;
    else ant-> prox= p->prox;
    free(p);
    return l;
}

void ListaLiberar (Lista*l){
    Lista*p = l;
    while(p!=NULL){
        Lista*t = p->prox;
        free(p);
        p = t;
    }
}


int main(){
    Lista*l1;
    int v;
    l1 = ListaCriar();
    l1 = ListaInserir(l1,10);
    l1 = ListaInserir(l1,20);
    l1 = ListaInserir(l1,30);
    l1 = ListaInserir(l1,40);
    l1 = ListaInserir(l1,50);
    ListaImprimir(l1);
    l1=ListaRetirar(l1,30);
    ListaImprimir(l1);
    printf("Digite um numero para buscar:\t");
    scanf("%d",&v);
    if(ListaBuscar(l1,v)!=NULL){
        printf("Encontrado\n\n");
    }
    else {
        printf("Nao Encontrado \n\n");
    }
return 0;
}

