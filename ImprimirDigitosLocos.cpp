#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int i;
	int u=0;
	int r;
	
	printf("Ingrese numero\n");
	scanf("%d", &i);
	
	while(u<=8)
	{
		i++;
		printf("%d\n", i);
		u++;
	}
	
	
	return 0;
}
