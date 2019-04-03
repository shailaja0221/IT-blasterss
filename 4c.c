#include<stdio.h>
void main()
{
char str[50],j,d=0;
printf("enter the word");
gets(str);
for(j=0;str[j]!='\0';j++)
{
if(str[j]==' ')
{
d++;
}
}
printf("%d",d);
} 
