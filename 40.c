#include <stdio.h>

int main()
{
    #include<stdio.h>
	void main()
	{
	int n,f,f1,f2,i;
	printf("enter the element");
	scanf("%d",&n);
	f=0;
	f1=1;
	printf("%d%d",f,f1);
	for(i=1;i<=n;i++)
	{
	f2=f+f1;
	f=f1;
	f1=f2;
	printf("%d",f2);
	}
