
#include <stdio.h>
#include <stdlib.h>

struct lista{
	int info;
	struct lista* prox;
};
typedef struct lista Lista;

void lst_imprime (Lista* li){
	Lista* p;
	for (p=li; p != NULL; p = p->prox){
		printf ("info = %d\n", p->info);
	}
}

int ImprimePares (Lista* li){
	Lista* p; int i=0;

	while (li!=NULL){
		if (li->info%2==0){
			p=li; p = p->prox;
			i++;
		}
	}
	lst_imprime(p);
	return i;
}

void ImprimeAlternado (Lista* li1, Lista* li2){
	Lista*p;
	while (li1!=NULL || li2 != NULL){
	p = li1;
	p = p->prox;
	p = li2;
	}
	lst_imprime(p);
}

Lista* lst_insere(Lista* li, int v){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = v;
	li->prox = novo;
	novo=novo->prox;
	return novo;
}


