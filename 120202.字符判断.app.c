#include<stdio.h>
void main()
{char direction;
scanf("%c",&direction);
printf("你在点击方向键\n");
switch(direction)
{
case 'a':printf("你在点击左键\n");break;
case 'w':printf("你在点击上键\n");break;
case 'd':printf("你在点击右键\n");break;
case 's':printf("你在点击下键\n");break;
default:printf("非方向键\n");
}
}
