#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	int i, numteste; int cardsRicardo, cardsVicente; int resto=0, mdc=0;
	scanf("%d", &numteste);

	for (i=0; i<numteste; i++){

		scanf("%d", &cardsRicardo);
		scanf("%d", &cardsVicente);

		int maior = 0, menor = 0;
		if (cardsRicardo>cardsVicente){
			 maior = cardsRicardo;
			 menor = cardsVicente;
		}else {
			maior = cardsVicente;
		    menor = cardsRicardo;
		 }


		do {
			resto = maior%menor;
			if (resto==0){
				mdc = menor;
				break;
			}
			else {
			mdc = resto;
			maior = menor;
			menor = resto;
		    resto = maior%resto;

		    if (mdc==1) break;
			}

		}while (resto!=0);
		printf("%d\n", mdc);

	}

	return 0;
  }


