#include <stdio.h>



int main(int argc, char** argv) 
{
	int r=1;
	int i;
	
	while(r<=10)
	{
	printf("Ingrese un numero\n");
	scanf("%d", &i);
     	if(i<0)
	     {
		
		 printf("Es negativo papito\n");
	     }
	     r++;
		
	}
	
	
	
	
	return 0;
}
