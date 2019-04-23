#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int jogo; int Vmaria=0, Vjoao=0;

	int j=0, rounds=0;
	do{
		scanf ("%d", &rounds);
		if (rounds==0) break;

		for (j=0; j<rounds; j++){
			scanf("%d", &jogo);

			if (jogo==0){
				Vmaria++;
			}

			if (jogo==1){
				Vjoao++;
			}

		} printf("Mary won %d times and John won %d times\n", Vmaria, Vjoao);
      Vmaria=0; Vjoao=0;
	}while(rounds!=0);

	return 0;
}
