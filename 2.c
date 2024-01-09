/*WAP TO FIND THE LEAP YEAR
ENTER VALUE OF A =
2000
ENTER VALUE OF B = 2024
2000
2004
2008
2012
2016
2020
2024*/
#include<stdio.h>

void main(){
	
	
		int a;
		int b;
		
		printf("ENTER VALUE OF A = \n");
		scanf("%d",&a);
		
		printf("ENTER VALUE OF B = ");
		scanf("%d",&b);
		
		
		while(a<=b){
			if(a%4==0){
				
			printf("%d\n",a);
		}
			a++;
		}
} 
