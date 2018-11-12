#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int power(int no)
{
int i;
int ans=1;
for(i=0;i<no;i++)
{
ans = ans*2;
}
return ans;
}

void main(int agrc,char *argv[])
{
int i,j;
int last = strlen(argv[1]);
int ans = 0;
int temp;
char x;
for(i=last-1,j=0;i>=0;i--,j++)
{
	if(argv[1][i]=='1')
	 ans=ans+power(j);

}

printf("ans : %d",ans);
}


