#include<stdio.h>
int prime(int a);
int main()
{
    int a;
    scanf("%d",&a);
	prime(a);
    return 0;
}
int prime(int a)
{	int i;

	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{printf("not prime.");break;}
	}
	if(i==a)
	{	
		printf("prime");
	}
	return 0;
}