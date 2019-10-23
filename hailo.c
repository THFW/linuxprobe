#if 1
#include<stdio.h>
#define N  10
struct tong
{
	char name[10];
	unsigned  long  birthday;
	char num[17];
};
void input_file(struct tong q[], int n);
void output_file(struct tong p[],int n);

int main()
{
	int n;
    struct tong t[N];
	scanf("%d",&n);
	input_file(t,n);
	output_file(t,n);

    return 0;
}
void input_file(struct tong q[], int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%s %lu %s",q[i].name,&q[i].birthday,q[i].num);
}
void output_file(struct tong p[],int n)
{
	int num,i,j, t;
/*	char *a,*b,*tmp;
	char *c,*d,*e;
	tmp=char malloc(10*sizeof(char));
	e=char malloc(17*sizeof(char));
	for(i=0;i<10;i++)
	{
	
		for(j=i+1;j<10;j++)
		{
			if(p[i].birthday>p[j].birthday)
			{
				t=p[i].birthday;
				p[i].birthday=p[j].birthday;
				p[j].birthday=t;

				a=p[i].name;
				b=p[j].name;
				*tmp=*a;
				*a=*b;
				*b=*tmp;

				c=p[i].num;
				d=p[j].num;

				*e=*c;
				*c=*d;
				*d=*e;

			}
		}
	}

*/
	int a[N];
	//scanf("%d",&m);
	for(i=0;i<10;i++)
	{
		a[i]=i;
	}

	for(i=0;i<10;i++)
	{
	
		for(j=i+1;j<10;j++)
		{
			if(p[a[i]].birthday>p[j].birthday)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		printf("%s %lu %s \n",p[a[j]].name,p[a[j]].birthday,p[a[j]].num);
	}

}

#else

#include<stdio.h>
int main()
{
    int b,i,j,t=0;
	int a[10]={2 ,5 ,4 ,13 ,1 ,8 ,34 ,11,6,3};
    for(i=0;i<10;i++)
	{
	
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d   ",a[i]);
	}

	b=19850403;
	printf("%d",b);
    return 0;
}
#endif