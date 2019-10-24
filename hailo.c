#include<stdio.h>
#define N 10

void deal_file(int a[N])
{
	int i,t,b,max,min;
	max=min=a[0];
		
	for(i=0;i<10;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			b=i;
		}
	}
	t=a[9];a[9]=a[b];a[b]=t;
	for(i=0;i<10;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			b=i;
		}
	}
	t=a[0];a[0]=a[b];a[b]=t;

}

void output_file(int a[N])
{	
	int i;
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main(void)
{
    int t[N];
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&t[i]);
	}
	deal_file(t);
	output_file(t);
    return 0;
}
//This is correct answer others are error