#include <stdio.h>
#include <stdlib.h>

void bolha(int *v, int tam_vetor)
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
    int i;
    int v[] = {40, 55, 23, 35, 41, 15, 20, 07, 10, 05, 33, 19};

    bolha(v, sizeof(v) / sizeof(int));

    printf ("Vetor ordenado: \n");
    for (i=0; i < sizeof(v) / sizeof(int); i++)
    {
        printf("%d\n", v[i]);
    }

    return 0;
}
