#include<stdio.h>
#include<windows.h>
void main()
{int a=18;
int b;
printf("提示0-20\n");
while(1){
scanf("%d",&b);
	if(b==a)
{printf("对");}
else if(b>a)
{printf("大了");}
else
{printf("小了");}
}
}
