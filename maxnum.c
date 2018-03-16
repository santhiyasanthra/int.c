#include<stdio.h>
#include<stdio.h>
void main()
{
int num[10],i,max=0;
for(i=0;i<10;i++)
scanf("%d",&num[i]);
max=num[0];
for(i=0;i<10;i++)
{
if(num[i]>max)
 max=num[i];
 }
 printf("%d",max);
getch();
}
