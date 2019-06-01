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

    int num,  i, k,h, cont=0, cod_livro[1000];

    while(1){
        
        printf ("Quantos livros: ");
         scanf ("%d", &num);

         for (i=0; i<num; i++){
             printf ("Digite codigo do livro: ");
             scanf ("%d", &cod_livro[cont]);   
             if (cod_livro[cont] == 0000) break;
             cont++;   
         }
        
         if (cod_livro[cont] == 0000) break;
    }
                
        Quicksort(cont, cod_livro);    
             
       for (k=0; k<cont; k++){
           printf ("%04d\n", cod_livro[k]);
       }

     

    return 0;
}