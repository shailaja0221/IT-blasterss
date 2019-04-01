#include<stdio.h>
	void main()
	{
	int a[10],j,k,temp,m;
	printf("enter limit");
	scanf("%d",&m);
	printf("enter number");
	for(j=0;j<m;j++)
	{
	scanf("%d",&a[j]);
	}
	temp=a[0];
	for(j=0;j<m;j++)
	{
	if(temp>a[j])
	{
	temp=a[j];
	}
	

	}
	

	printf("%d",temp);
	}
