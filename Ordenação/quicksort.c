#include <stdio.h>
#include <stdlib.h>

void quicksort(int n, int *v)
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

    int v[] = {40, 55, 23, 35, 41, 15, 20, 07, 10, 05, 33, 19};
    int h;

    quicksort(sizeof(v) / sizeof(int),v);

    for (h = 0; h < sizeof(v) / sizeof(int); h++)
    {
        printf("%d\n", v[h]);
    }

    return 0;
}
