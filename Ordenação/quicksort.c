#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quicksort(int  n, unsigned long int *v)
{
    if (n <= 1)
    {
        return;
    }
    
    int x = v[0];
    int a = 1;
    int b = n - 1;
    int aux;

    do
    {
        while (a < n && v[a] <= x)  a++;
        while (v[b] > x) b--;
        if (a < b)
        {
            aux = v[a];
            v[a]=v[b];
            v[b]=aux;
            a++; b--;
        }
    } while (a <= b);

    //troca pivo
    v[0] = v[b];
    v[b]=x;

    quicksort (b, v);
    quicksort (n-a, &v[a]);
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

  /*  int v[] = {40, 55, 23, 35, 41, 15, 20, 07, 10, 05, 33, 19};
    int h;
*/
    quicksort(sizeof(mil) / sizeof(unsigned long int), mil);

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
