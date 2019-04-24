#include <stdio.h>
#include <stdlib.h>

void bolha_rec(int *v, int n)
{
    int j;
    int troca = 0;
    for (j = 0; j < n - 1; j++){
        if (v[j] > v[j + 1])
        { 
            int aux = v[j];
            v[j] = v[j + 1];
            v[j + 1] = aux;
            troca = 1;
        }
    if (troca != 0) bolha_rec(v, n - 1);
    }
}

int main()
{
    int i;
    int  v[] = {40, 55, 23, 35, 41, 15, 20, 07, 10, 05, 33, 19};

    bolha_rec(v, sizeof(v) / sizeof(int));

    printf ("\n");
    printf("Vetor ordenado: \n");
    for (i = 0; i < sizeof(v) / sizeof(int); i++)
    {
        printf("%d\n", v[i]);
    }
    printf ("\n");

    return 0;
}
