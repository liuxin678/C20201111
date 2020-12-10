#include<stdio.h>
#include<string.h>
void main()
{
char s1[]="宝塔镇河妖";
char s2[30];	
int y=18;
int x;
int i=1;
printf("天王盖地虎\n");
scanf("%s",&s2);
if( strcmp(s1,s2)==0 ){
printf("欢迎进入游戏\n");
	while(i<=3){
		scanf("%d",&x);
		if(x>y){
		printf("大了\n");
		}
		else if(x<y){
		printf("小了\n");
		}
		else if(x==y){
		printf("厉害了\n");
		i=i+100;
		}
	i++;
	}
}
}
