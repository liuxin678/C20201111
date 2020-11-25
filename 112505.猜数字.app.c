#include<stdio.h>
#include<windows.h>
void main()
{int a=18;
int b;
int c=1;
printf("提示0-20\n");
while(c<=10){
scanf("%d",&b);
	if(b==a)
{printf("对");
	c=c+25;}
else if(b>a)
{printf("大了");}
else
{printf("小了");}
}
c++;
