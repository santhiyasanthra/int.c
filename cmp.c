#include <stdio.h>
#include<string.h>
int main(void) {
	char name[100],name1[100];
    int i,a,b,string1=0,string2=0;
    scanf("%s",&name);
    scanf("%s",&name1);
    a=strlen(name);
    b=strlen(name1);
    for(i=0;i<=a;i++)
    {
    	string1=string1+name[i];
    }
    for(i=0;i<=b;i++)
    {
    	string2=string2+name1[i];
    }
    if(string1>string2)
    {
    	printf("%s",name);
    }
    else
    if(string2>string1)
    {
    	printf("%s",name1);
    	
    }
    else
    {
    	printf("%s",name);
    	
    }
return 0;
}
    
