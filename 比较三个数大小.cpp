#include<stdio.h>
int main()
{
	int x,y,z,max;
	printf("��������������");
	scanf("%d,%d,%d",&x,&y,&z);
	max=x;
	if (y>max)      
		max=y;
	if (z>max)
		max=z;
	printf("max=%d\n",max); 
 } 
