#include<stdio.h>
void main()
{
char str[40],j,d=0;
printf("enter a character");
gets(str);
for(j=0;str[j]!='\0';j++)
{
if(str[j]>'a' &&str[j]<'z')
{
d++;
}
}
printf("%d",d);
}
