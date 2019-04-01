#include<stdio.h>
void main()
{
char t[10],s;
printf("enter a string");
scanf("%s",&t);
for(j=0;t[j]!='\0';j++)
{
if((t[j]>'a')&&(t[j]<'z'))
{
printf("no numeric");

}
else
{
    printf("%c\n",t[j]);
}
}}
