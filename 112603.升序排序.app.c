#include<stdio.h>
void main()
{int a,b,c,t;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
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
if(b>c)
{
	t=b;
	b=c;
	c=t;
}
printf("%d,%d,%d\n",a,b,c);
}
