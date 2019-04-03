#include<stdio.h>
void main()
{
char str[50],J,C=0;
printf("enter the word");
gets(str);
for(J=0;str[J]!='\0';J++)
{
if((str[J]>='0')&&(str[J]<='9'))
{
C++;
}
}
printf("%d",C);
}
