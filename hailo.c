#include<stdio.h>
int input_file(int a[10]);
int deal_file(int a[10]);
int output_file(int a[10]);
int main()
{
    int t[10];

	input_file(t);
	deal_file(t);
	output_file(t);
    return 0;
}


int input_file(int a[10])
{	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",a+i);
	}
	return 0;
}

int deal_file(int a[10])
{	
	int b[10],i,j,t=0,tmp=0;
	for(i=0;i<10;i++)
	{
		b[i]=i;
	}
    for(i=0;i<10;i++)
	{	
		for(j=i+1;j<10;j++)
		{
			if(a[b[i]]>a[b[j]])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}

	t=a[b[0]];
	a[b[0]]=a[0];
	a[0]=t;

	tmp=a[b[9]];
	a[b[9]]=a[9];
	a[9]=tmp;

	return 0;
}

int output_file(int a[10])
{	int i;
	for(i=0;i<10;i++)
		printf("%d ",a[i]);

	return 0;
}
