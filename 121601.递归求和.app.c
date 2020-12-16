#include<stdio.h>
int ok(int x){
	if(x<=0){
	return 0;
	}
return x=x+ok(x-1);
}
void main()
{
int a;
scanf("%d",&a);
printf("%d\n",ok(a));
}
