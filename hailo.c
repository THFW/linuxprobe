#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c,cc,d,dd;
    for(c=0;c<3;c++)
		for(cc=0;cc<3;cc++)
			scanf("%d",&a[c][cc]);

	for(d=0;d<3;d++)
	{
		for(dd=0;dd<3;dd++)
			printf("%d ",a[dd][d]);
		printf("\n");
	}
    return 0;
}