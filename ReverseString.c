#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	
	int length = strlen(argv[1]);
	printf("%d",length);	

	char str[length];
	
	int i;
	int j;
	for(i=length-1,j=0;i>=0;i--,j++)
	{
	str[j]=argv[1][i];
	}
	str[j]='\0';

	printf("Reversed String : %s",str);

	return 0;
	
}
