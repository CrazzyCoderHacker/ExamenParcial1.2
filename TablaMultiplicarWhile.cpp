#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	
	int x;
	int y;
	int r;
	
    x = 1;
    y = 1;
	while(x<=10)
	{ 
	  while(y<=10)
	  {
	  	r= x * y;
	  	printf("%d x %d = %d \n", x, y, r);
	  	y = y + 1; 
	  }
	 x = x+1;
	 y = 1;
	 
	}
	
    
  
	

	
	
	return 0;
}
