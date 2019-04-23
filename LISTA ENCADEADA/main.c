#include <stdio.h>
#include <stdlib.h>

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

int comprimento (Lista*l){
  int cont=0;
  Lista *p = l;
  while(p != NULL){
    cont++;
    p = p->prox;
  }
  return cont;
}

int maiores(Lista*l, int n){
      int num_nos=0;
  Lista *p = l;
  while(p != NULL){
   if (p->Info>n) num_nos++;
    p = p->prox;
  }
  return num_nos;
}

Lista* last(Lista*l){
    int num_nos=0;
  Lista *p = l;
 Lista *ant; ant == NULL;
  while(p != NULL){
   num_nos++;
    ant = p;
    p = p->prox;
    if (p==NULL) return ant;
}
return ant;
}

/* concatena modificando l1 */
Lista* concatena (Lista* l1, Lista* l2)
{
Lista* p; /* variável auxiliar para percorrer a lista */
Lista* q; /* variável auxiliar para criar a nova lista */
if (l1 == NULL) return l2;
p = l1;
do
{ q = p;
p = p->prox;
} while(p != NULL);
q->prox = l2;
return l1;
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
    int size; int maior; int n; int ultimo;
    Lista*l1; Lista*l2;
    int v;
    l1 = ListaCriar();
    l1 = ListaInserir(l1,10);
    l1 = ListaInserir(l1,20);
    l1 = ListaInserir(l1,30);
    l1 = ListaInserir(l1,40);
    l1 = ListaInserir(l1,50);
    l1 = ListaInserir(l1,60);

    l2 = ListaCriar();
    l2 = ListaInserir(l2,15);
    l2 = ListaInserir(l2,25);
    l2 = ListaInserir(l2,35);
    l2 = ListaInserir(l2,45);
    l2 = ListaInserir(l2,55);
    l2 = ListaInserir(l2,65);
   /* ListaImprimir(l1); */
    /*  l1=ListaRetirar(l1,30); */
    ListaImprimir(l1);
  /*  printf("Digite um numero para buscar\n");
    scanf("%d",&v);
    if(ListaBuscar(l1,v)!=NULL){
        printf("Encontrado\n");
    }
    else {
        printf("Nao Encontrado \n");
    }
*/
    size = comprimento(l1);
    printf("O comprimento da lista: %d", size);

    printf("\n\nDigite o valor de n\n");
    scanf("%d", &n);
    maior = maiores(l1,n);
    printf("\nNos que possuem info maior que n: %d \n", maior);

    printf("Endereco do ultimo: %p\n", last(l1));

    ListaImprimir(concatena(l1,l2));


return 0;
}

