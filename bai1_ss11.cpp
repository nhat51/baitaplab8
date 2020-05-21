#include <iostream>
#include <string.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    char  name[10][12],temp[10];
    int i,j;
    
   for (i=0;i<7;++i)
    {	printf ("enter student name: ");
    	scanf ("%s",name[i]);
   }
   for (i=1;i<7;++i)
   {
   	for (j=1;j<7;++j)
   	if (strcmp(name[j-1],name[j])>0)
   	{
   		strcpy (temp,name[j-1]);
   		strcpy (name[j-1],name[j]);
   		strcpy (name[j],temp);
   		}
   		  
			 }
printf ("name in alphabelt is: \n");

for (i=0;i<6;++i)

printf("\n %s",name[i]);
 
	return 0;
}
