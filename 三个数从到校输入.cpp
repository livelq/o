#include<stdio.h>
int main()
{
	int x,y,z,t;
	printf("������������:");
	scanf("%d,%d,%d",&x,&y,&z);
	if (x>y)
		{t=x;
		 x=y;
		 y=t;
		}                          /*һ�������¶�����ʱҪ�û�����������*/
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
		printf("%d%d%d\n",z,y,x);   /*Ҫ����һ��tab��*/ 
 } 
