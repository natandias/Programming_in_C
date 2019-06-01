#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(){

    char nome[51][51];char maior[51][51]; int n, i;

    printf("Quantas frases: ");
    scanf ("%d", &n);

    for (i=0; i<=n; i++){
       scanf ("%[^\n]", &nome[i]); 
       if (strlen(nome[i])>strlen(maior[i])) strcpy(maior[i],nome[i]);

       scanf("%*[^\n]"); scanf("%*c");
    }
    
    /*for (i=0; i<=n; i++){
        printf ("%s\n", maior[i]);
    }*/
    

return 0;
}