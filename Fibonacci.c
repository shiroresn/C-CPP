#include<stdio.h>
#include<stdlib.h>

void main(int argc, char *argv[])
{
int n=atoi(argv[1]);
int a1=0;
int a2=1;
int next=0;

printf("%d ",a1);
printf("%d ",a2);

int i;
for(i=0;i<n;i++)
{
next=a1+a2;
a2=next;
a1=a2;
printf("%d ",next);
}

}
