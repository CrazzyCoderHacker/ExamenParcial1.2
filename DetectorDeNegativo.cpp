#include <stdio.h>



int main(int argc, char** argv) 
{
	
	int titulo, i, r=1, u;
	
	for(titulo=1; titulo<=50; titulo++)
	{
		printf(" ");
		if(titulo==50)
		{
			printf("Detector de Negativos\n");
		}
	
	}
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
