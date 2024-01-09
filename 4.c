/*WAP TO FIND THE FACTORIAL
enter any number :5
1
2
3
4
5

120

*/
#include<stdio.h>

void main(){
		int a=1;
		int n,sum;
		printf("enter any number :");
		scanf("%d",&n);
		while(a<=n){	
		sum = sum*a;	
			printf("%d\n",a);
			a++;
		}
            	printf("\n%d\t",sum);
		}


