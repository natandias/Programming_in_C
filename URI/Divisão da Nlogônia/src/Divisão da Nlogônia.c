#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, numconsultas; int pX, pY, Xdivisor, Ydivisor;

    while(1) {
    	scanf ("%d", &numconsultas);
    	if (numconsultas == 0) break;

        scanf("%d", &Xdivisor);
    	scanf("%d", &Ydivisor);

    	for (i=0; i<numconsultas; i++){

    	scanf("%d", &pX);
    	scanf("%d", &pY);

    	if ((pX==Xdivisor && pY==Ydivisor) || (pX!=Xdivisor && pY==Ydivisor) || (pX==Xdivisor && pY!=Ydivisor)){
    		printf("divisa\n");
    	}

    	if (pX<Xdivisor && pY>Ydivisor){
    		printf("NO\n");
    	}

    	if (pX>Xdivisor && pY>Ydivisor){
    	    printf("NE\n");
    	}

    	if (pX>Xdivisor && pY<Ydivisor){
    	    printf("SE\n");
    	}

    	if (pX<Xdivisor && pY<Ydivisor){
    	    printf("SO\n");
    	}
   }

}

	return 0;
}
