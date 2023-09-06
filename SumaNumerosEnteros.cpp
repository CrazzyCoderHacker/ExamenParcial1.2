#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
  int  i, ii, r;
  
  printf("Que suma desea realizar?\n");
  scanf("%d", &i);
  printf("Con que lo desea sumar?\n");
  scanf("%d", &ii);
  r=i+ii;
  printf("El resultado es %d + %d = %d", i, ii, r); 
	
	return 0;
}
