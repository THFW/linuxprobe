#include<stdio.h>
int main()
{
	int i,j;
	char a[26],b[26];
	scanf("%s",a);
	for(i=0;i<26;i++)
	{
		if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
		{
			b[i]=a[i];
		}		
	}
	for(j=0;j<26;j++)
	{	
		if((b[j]=='a')||(b[j]=='e')||(b[j]=='i')||(b[j]=='o')||(b[j]=='u'))
		{
			printf("%c",b[j]);
		}
	}

    return 0;
}