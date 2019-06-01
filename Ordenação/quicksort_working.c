#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Quicksort (int v[], int ini, int fim){
    int pivo = ini, aux;
    int esq = ini, dir = fim;

    if (esq >= dir) return;
    while(esq < dir){
        while (v[esq] < v[pivo]) esq++;
        while (v[dir]   >  v[pivo]) dir--;
            if (esq < dir)
            {
                aux = v[esq]; 
                v[esq] = v[dir]; 
                v[dir] = aux;
                
            }
            if (esq == pivo) 
            {
                pivo = dir; 
                esq++;
            }
            else if (dir == pivo)
            { 
                pivo = esq; 
               dir--;
            }
    }        
    Quicksort (v, ini, pivo-1);
    Quicksort (v, pivo+1, fim);
}

int main(){
    srand ((unsigned)time(NULL));

    int vector[15], i, f;


   for (i=0; i<15; i++){
        vector[i] =  rand()%100;
    }

    Quicksort (vector, 0, 14);
    for (f=0; f<15; f++){
        printf("%d\t", vector[f]);
    }


    return 0;
}