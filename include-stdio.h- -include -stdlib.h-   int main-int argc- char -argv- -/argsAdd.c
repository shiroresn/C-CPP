#include<stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	//Addition of two numbers :
	
    int a = atol(argv[1]);
    int b = atol(argv[2]);
    int c = a+b;	
    printf("a+b=%d", c);	

	return 0;
	
}
