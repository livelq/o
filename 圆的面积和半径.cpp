#define A 3.1415 
#include<stdio.h>
int main()
{
	float r,c,s;
	printf("请输入圆的半径："); 
	scanf("%f",&r);
	c=2*A*r;
	s=A*r*r;
	printf("周长=%.3f，面积=%.3f\n",c,s);  
}
