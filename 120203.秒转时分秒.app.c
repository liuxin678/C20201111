#include<stdio.h>
void main()
{int time,hour,min,sec;
printf("time=");
scanf("%d",&time);
hour=time/3600;
min=time%3600/60;
sec=time%60;
printf("%d:%d:%d:",hour,min,sec);
}
