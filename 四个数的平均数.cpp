#include<stdio.h>
int main()
{
	float X,a,b,c,d;
	printf("请输入四个数：");
	scanf("%f,%f,%f,%f",&a,&b,&c,&d);
	X=(a+b+c+d)/4;
	printf("平均数为%.2f",X);
}
