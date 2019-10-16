#include<stdio.h>
#include<math.h>
int two_different_ansewer(float a,float b,float c);
int one_ansewer(float a,float b,float c);
int no_ansewer(float a, float b,float c);

int main()
{
    float   a,b,c;
    scanf("%f %f %f",&a,&b,&c);
	if(b*b-4*a*c>0)
	{
		two_different_ansewer(a,b,c);
	} 
	else if(b*b-4*a*c==0)
	{
		one_ansewer(a,b,c);
	}
	else if(b*b-4*a*c<0)
	{
		no_ansewer(a,b,c);	
	}

    return 0;
}

int two_different_ansewer(float a,float b,float c)
{
	double x1,x2;
	float m;
	m=-b/(2*a);
	x1=sqrt(b*b-4*a*c)/(2*a);
	x2=sqrt(b*b-4*a*c)/(2*a);

	printf("x1=%f-%.4f",m,x1);
	printf("x2=%f+%.4f",m,x2);

	return 0;
}

int one_ansewer(float a,float b,float c)
{double x1,x2;
	float m;
	m=-b/(2*a);
	x1=sqrt(b*b-4*a*c)/(2*a);
	x2=sqrt(b*b-4*a*c)/(2*a);

	printf("x1=%.3f+%.4f  ",m,x1);
	printf("x2=%.3f-%.4f ",m,x2);
	return 0;
}

int no_ansewer(float a,float b,float c)
{double x1,x2;
	float m,n;
	m=-b/(2*a);
	n=-(b*b-4*a*c);
	x1=+sqrt(n)/(2*a);
	x2=sqrt(n)/( 2*a);
	
	printf("x1=%.3f+%.3fi ",m,x1);
	printf("x2=%.3f-%.3fi ",m,x2);

	return 0;
}