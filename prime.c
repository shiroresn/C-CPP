#include<stdio.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
int no = atoi(argv[1]);
int i,flag;
for(int i=2;i<no/2;i++)
{
if(no%i==0)
flag=1;//number is not prime
break;
}

if(no==1)
{
printf("1 is nither prime not composite");
}
else
{
if(flag==0)
{
printf("prime");
}
else
{
printf("composit");
}

}

}
