#include <stdlib.h>
#include <stdio.h>

void Quicksort(int n, int *v){
    
    if (n<=1) return; 
    //ponteiro vindo do ínicio (esquerda)
    int p_ini = 0;
    //ponteiro vindo do fim (direita)
    int p_fim = n-1;
    //'var' que será usada para trocar os ponteiros
    int aux;
    //seleciona como pivô o elemento do meio
    int pivo = v[0];

    do{
        /*enquanto os numeros da esquerda forem menores que o pivo
            avança o ponteiro vindo da esquerda */
        while (p_ini <  n && v[p_ini] <= pivo) p_ini++; 
        /* enquanto os numeros da direita forem maiores que o pivo
            avança o ponteiro vindo da direita*/
        while (v[p_fim] > pivo) p_fim--; 

        if (p_ini < p_fim)
        {
            aux = v[p_ini];
            v[p_ini] = v[p_fim];
            v[p_fim] = aux;
            p_ini++; p_fim--;
        }
    } while (p_ini <= p_fim);

    //troca pivo
    v[0] = v[p_fim];
    v[p_fim] = pivo;

    Quicksort(p_fim, v);
    Quicksort(n-p_ini, &v[p_ini]) ; 
}

int main(){

    int num[2000], repet[2000], x[2000], i, k, qtd_testes, qtd_num=0, x=0, cont=0;

    printf ("qtd_t: ");
    scanf ("%d", &qtd_testes);
    for (i=0; i<qtd_testes; i++){
        
        printf("num: ");
        scanf ("%d", &num[i]);
        cont++;
    }
    Quicksort(cont, num);
    

   for (i=0;i<qtd_testes; i++){
            for (k=0; k<cont; k++)
                {
                    if (num[i] == num[k]) {
                        repet[i]++;  x[i]=1;
                    } 
                    else x[i]=0;          
            }
            if (repet[i] != 0 && x[i] != 1) printf ("%d aparece %d vez(es)\n", num[i], repet[i]);          
   }

   
    return 0;
}