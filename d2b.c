#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
int no = atoi(argv[1]);
int binary[25];

int ans;
int q;
int i=0;
while(q!=0)
{
q=no/2;
ans = no%2;
binary[i++]=ans;
no=q;
}
binary[i]=9;

for(i=0;binary[i]!=9;i++);

i--;
for(;i>=0;i--)
{
printf("%d",binary[i]);
}

}
