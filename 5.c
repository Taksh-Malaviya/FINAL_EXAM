/*WAP TO USING STRUCTURE REPRESENT A MOVIE (TITLE,GENRE,LANG)N MOVI DETAILS

ENTER THE TITLE = RRR
ENTER THE GENRE = action
ENTER THGE LANG = hindi


----2----

ENTER THE TITLE = KGF
ENTER THE GENRE = action
ENTER THGE LANG = hindi

----3----

ENTER THE TITLE = SALAR
ENTER THE GENRE = action
ENTER THGE LANG = hindi

*/


#include<stdio.h>
#include<string.h>

struct taksh{
	char title;
	char genre;
	char lang;
};

void main(){
	
	struct taksh t;
	struct taksh t1;
	struct taksh t2;
	
	
	printf("ENTER THE TITLE\n = ",t.title);
	scanf("%s",&t.title);
	printf("ENTER THE GENRE = \n",t.genre);
	scanf("%s",&t.genre);
	printf("ENTER THGE LANG\n = \n",t.lang);
	scanf("%s",&t.lang);
	
	printf("----2----\n");
	
	printf("ENTER THE TITLE = \n",t1.title);
	scanf("%s",&t1.title);
	printf("ENTER THE GENRE = \n",t1.genre);
	scanf("%s",&t1.genre);
	printf("ENTER THGE LANG = \n",t1.lang);
	scanf("%s",&t1.lang);
	
		printf("----3----\n");
	
	printf("ENTER THE TITLE = \n",t2.title);
	scanf("%s",&t2.title);
	printf("ENTER THE GENRE = \n",t2.genre);
	scanf("%s",&t2.genre);
	printf("ENTER THGE LANG = \n",t2.lang);
	scanf("%s",&t2.lang);
		
}
