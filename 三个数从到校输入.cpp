#include<stdio.h>
int main()
{
	int x,y,z,t;
	printf("请输入三个数:");
	scanf("%d,%d,%d",&x,&y,&z);
	if (x>y)
		{t=x;
		 x=y;
		 y=t;
		}                          /*一个条件下多个语句时要用花括号括起来*/
	if (x>z)
		{t=z;
		 z=x;
		 x=t;
		} 
	if (y>z)
		{t=y;
		 y=z;
		 z=t;
		}
	else
		printf("%d%d%d\n",z,y,x);   /*要缩进一个tab键*/ 
 } 
