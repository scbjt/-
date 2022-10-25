#include<stdio.h>
int main()
{
	float a,b,c,d,t;
	scanf("%f,%f,%f,%f",&a,&b,&c,&d); 
    if(a>b)
    {
    t=a;
    a=b;
    b=t;
    }
	if(a>c)
	{
    t=a;
    a=c;
    c=t;
    }
    if(a>d)
    {
    t=a;
    a=d;
    d=c;
    }
    if(b>c)
    {
	t=b;
	b=c;
	c=t;
    }
    if(b>d)
    {
	t=b;
	b=d;
	d=t;
    }
	if(c>d)
	{
	t=d;
	d=c;
	c=t;
    }
	printf("%5.2f,%5.2f,%5.2f,%5.2f\n",a,b,c,d);
	return 0;
}

