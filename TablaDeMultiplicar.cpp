#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int i;
	int u;
	int r;
	
	for(i=1; i<=10; i++)

	{
		printf("La tabla del %d\n", i);
		for(u=1; u<=10; u++)
		{
		r= i*u;
		printf("%d x %d = %d\n", i, u, r);
		}
		
	}
	
	return 0;
}
