#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bolha(int tam_vetor, long unsigned int *v)
{
    int i, j, aux, troca;
    //Percorre todos os elementos do vetor
    for (i = tam_vetor - 1; i > 0; i--){
        troca = 0;
        //Compara cada elemento do vetor com o seu próximo
        for (j = 0;  j < i;  j++){
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                troca = 1;
            }         
        }
        if (troca == 0) return;
    }
}

int main()
{
      clock_t c2, c1;
    c1 = clock();

    int i, h, k=3; unsigned long int mil[100001];
    for (i=100000; i>0; i--){
        k += k*2 ; 
        mil[i] = k ;
    }

    bolha(sizeof(mil)/sizeof(unsigned long int), mil);

    printf ("\nVetor ordenado: \n");
    for (h = 0; h < sizeof(mil) / sizeof(unsigned long int); h++)
    {
        printf("%d\n", mil[h]);
    }
    printf ("\n");

    c2 = clock();
    int tempo = (c2 - c1)*1000/CLOCKS_PER_SEC;

    printf ("Tempo total de execucao: %d ms", tempo);
     printf ("\nTempo total de execucao: %d segundos", tempo/1000);
    printf ("\n\n");

    return 0;
}
