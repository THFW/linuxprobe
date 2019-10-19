#include <stdio.h>
#include <stdlib.h>
#define N 10
struct tong{
char name[11];
char birthday[11];
char sex;
char gnum[17];
char num[17]; 
};
void input_file(struct tong p[],int n);
void output_file(struct tong  q[],int n);

int main()
{
	int n;
	struct tong t[N];

	scanf("%d",&n);

	input_file(t,n);
	output_file(t,n);

	return 0;
}
void input_file(struct tong p[], int n)
{
	int i,a;
	
	for(i=0;i<n;i++)
	{
		scanf("%s%s %c%s%s",p[i].name,p[i].birthday,&p[i].sex,p[i].gnum,p[i].num);
	}
}

void output_file(struct tong q[], int n)
{	
	int a[N];
	int m,j,i,b;
	scanf("%d",&m);
	for(b=0;b<m;b++)
	{
		scanf("%d",&a[b]);
	}
	for(j=0; j<m; j++)
	{
		if(a[j]>=0 && a[j]<n)
		{
			printf("%s%s%c%s%s\n",q[a[j]].name,q[a[j]].birthday,q[a[j]].sex,q[a[j]].gnum,q[a[j]].num);
		}
		else
		{
			printf("Not Found\n");
		}
	}
}


#if 0
#include<stdio.h>
#define N 10
int main()
{
    int a[N],b,j,t,i;
	for(i=0;i<N;i++)
    scanf("%d",a+i);
	b=a[N-1];
	for(j=0;j<N;j++)
	{
		if(b>a[j])
		{
			t=a[j+1];
			a[j+1]=a[j];
		}
	}
	for(j=0;j<N;j++)
	printf("%d\n",a[j]);
    return 0;
}
#endif 