#include<stdio.h>
#define N 100
char input_file(char a[N]);
int i=0,b=0,c=0,d=0,e=0;
int main()
{
	char t[N];
	gets(t);
	input_file(t);
	printf("%d %d %d %d",c,b,d,e);
    return 0;
}

char input_file(char a[N])
{
    
	
   // while(~scanf("%d%d", &a, &b))printf("%d\n",a+b);
	
	for(i=0;i<N;i++)
	{	
	
		if((a[i] >= '0')&&(a[i]<='9'))
			b++;
		else if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
			c++;
		else if(a[i]==' ')
			d++;
		else
		{
			if(a[i]=='\0') break;
			e++;
		}
	}

	return 0;
}