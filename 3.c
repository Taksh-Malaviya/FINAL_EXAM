/*WAP SWAPING THE NUMBER

Enter the value of A =  2
Enter the value of B = 3
a=3
b=2
*/
#include <stdio.h>
void main() {
	
    int a,b;
    int swap;
    int *n,*n1;
    printf("Enter the value of A =  ");
    scanf("%d",&a);
    printf("Enter the value of B = ");
    scanf("%d",&b);
    
    n= &a;
    n1= &b;
 
    swap = *n;
    
    *n = *n1;
    *n1 = swap;
    printf("a=%d\n",a);
    printf("b=%d",b);
    
}
