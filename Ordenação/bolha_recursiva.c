#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bolha_rec(int * v, int n)
{
    int j, aux;
    int troca = 0;
    for (j = 0; j < n - 1;  j++){
        if (v[j] > v[j + 1])
        { 
            aux = v[j];
            v[j] = v[j + 1];
            v[j + 1] = aux;
            troca = 1;
        }
   if (troca != 0) bolha_rec(v, n - 1);
    } 
    
}

int main()
{
    clock_t c2, c1;
    c1 = clock();

    int i, h, k=3; int mil[1001];
        for (i=1000; i>=0; i--){
            k += k*2 ; 
            mil[i] = k ;
        }
    bolha_rec(mil, sizeof(mil));

    printf ("\n");
    printf("Vetor ordenado: \n");
    for (i = 0; i < sizeof(mil); i++)
    {
        printf("%d\n", mil[i]);
    }
    printf ("\n");

    c2 = clock();
    int tempo = (c2 - c1)*1000/CLOCKS_PER_SEC;

    printf ("Tempo total de execucao: %d ms", tempo);
     printf ("\nTempo total de execucao: %d segundos", tempo/1000);
    printf ("\n\n");

 
    return 0;
}
