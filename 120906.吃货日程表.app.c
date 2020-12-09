#include<stdio.h>
#include<string.h>
void main()
{
char l5[]="";
char l1[]="春节";
char l2[]="端午";
char l3[]="中秋";
char l4[]="元宵节";
printf("欢迎使用吃货小程序\n");
scanf("%s",&l5);
if(strcmp(l1,l5)==0)
{printf("饺子");}
else if(strcmp(l2,l5)==0)
{printf("粽子");}
else if(strcmp(l3,l5)==0)
{printf("月饼");}
else if(strcmp(l4,l5)==0)
{printf("元宵");}
}
