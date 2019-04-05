#include<stdio.h>
void main()
{
int f,f1,temp;
printf("enter two numbers");
scanf("%d%d",&f,&f1);
f=f^f1;
f1=f1^f;
f=f^f1;
printf("%d\t%d",f,f1);
}
