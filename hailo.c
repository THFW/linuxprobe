#include<stdio.h>
int main()
{
    int a,b,c,d,e;
	scanf("%d",&a);
	b=a%10;
	c=(a/10)%10;
	d=a/100%10;
	e=a/1000%10;
	printf("%d %d %d %d",e,d,c,b);

    return 0;
}