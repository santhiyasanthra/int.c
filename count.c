#include<stdio.h>
#include<conio.h>
void main()
{
int num,rem=0,add=0;
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
add=add+rem;
num=num/10;
}
printf("%d",add);
getch();
}
