/*
WAP C PROGRAM TO PRINT PATTERN USING THE LOOP

____*
___**
__***
_****
*****

*/

#include<stdio.h>

void main(){
	
	int i,j,k;
	
	for(i=5;i>=1;i--){
			for(k=i;k>1;k--){
					printf("_");
			}
	 	for(j=i;j<=5;j++){
			printf("*",j);
		}
			printf("\n");
	}

}
