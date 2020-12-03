#include<stdio.h>
void main()
{
int row,column;
int num2d[2][3]={
	{2001,2002,2003},
	{2004,2005,2006}
};
for(row=0;row<2;row++){
	for(column=0;column<3;column++){
		printf("%d ",num2d[row][column]);
	}
    printf("\n");
  }
}
