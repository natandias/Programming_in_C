#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mergeSort(int *vetor, int posicaoInicio, int posicaoFim) {
    int i, j, k, metadeTamanho, *vetorTemp;
    if(posicaoInicio == posicaoFim) return;
    metadeTamanho = (posicaoInicio + posicaoFim ) / 2;

    mergeSort(vetor, posicaoInicio, metadeTamanho);
    mergeSort(vetor, metadeTamanho + 1, posicaoFim);

    i = posicaoInicio;
    j = metadeTamanho + 1;
    k = 0;
    vetorTemp = (int *) malloc(sizeof(int) * (posicaoFim - posicaoInicio + 1));

    while(i < metadeTamanho + 1 || j  < posicaoFim + 1) {
        if (i == metadeTamanho + 1 ) { 
            vetorTemp[k] = vetor[j];
            j++;
            k++;
        }
        else {
            if (j == posicaoFim + 1) {
                vetorTemp[k] = vetor[i];
                i++;
                k++;
            }
            else {
                if (vetor[i] < vetor[j]) {
                    vetorTemp[k] = vetor[i];
                    i++;
                    k++;
                }
                else {
                    vetorTemp[k] = vetor[j];
                    j++;
                    k++;
                }
            }
        }

    }
    for(i = posicaoInicio; i <= posicaoFim; i++) {
        vetor[i] = vetorTemp[i - posicaoInicio];
    }
    free(vetorTemp);
}

int main()
{

    clock_t c2, c1;
    c1 = clock();

    int i, h, k=3; int* mil = (int*) malloc (sizeof(int)*10001);
    for (i=10000; i>0; i--){
        k += k*2 ; 
        mil[i] = k ;
    }

  /*  int v[] = {40, 55, 23, 35, 41, 15, 20, 07, 10, 05, 33, 19};
    int h;
*/
    mergeSort(mil, 0, 100000);

    printf ("\nVetor ordenado: \n");
    for (h = 0; h < sizeof(mil); h++)
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
