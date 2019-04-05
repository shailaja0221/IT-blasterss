	#include<stdio.h>
	void main()
	{
	int a[20],j,tem;
	printf("enter number");
	for(j=1;j<=10;j++)
	{
	scanf("%d",&a[j]);
	}
	tem=a[1];
	for(j=1;j<=10;j++)
	{
	if(tem<a[j])
	{
	tem=a[j];
	}
	}
	printf("%d",temp);
	}


