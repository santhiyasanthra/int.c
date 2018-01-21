#include <stdio.h>

void main()
{
	int n,count=0;
	scanf("%d",&n);
	printf("%d",n);
	while(n!=0)
	{
		n/=10;
		++count;
	}
	printf(" integer count is %d",count);
	getch();
}
