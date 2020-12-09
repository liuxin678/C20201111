#include<stdio.h>
void main()
{
int i=91;
int row,column;
int num2d[9][10]={
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0}
};
for(row=0;row<9;row++){
	for(column=0;column<10;column++)
	{
		i--;
		num2d[row][column]=i;
printf("%d ",num2d[row][column]);
	} printf("\n");
}
}
