#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

     int x1, y1, x2, y2, D=0;

     while(1){
     scanf("%d", &x1);
     scanf("%d", &y1);
     scanf("%d", &x2);
     scanf("%d", &y2);

     if(x1==0 && y1==0 && x2==0 && y2==0){
    	 break;
     }

     if (x1==x2 && y1==y2) printf ("0\n");

     if (x1==x2){  printf ("%.0d", abs(y2-y1)); }
     if (y1==y2){  printf ("%.0d", abs(x2-x1)); }



     if (x1!=x2 && y1!=y2){
    	 D = x1-x2;
    	 printf("%.0d\n", abs(D));
     }


     }


	return 0;
}
