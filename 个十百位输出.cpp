#include<stdio.h>
int main()
{
	int x,g,sh,b;
	printf("请输入一个整数：");
	scanf("%d",&x);
	g=x%10;
	sh=(x/10)%10;
	b=x/100;
	printf("个位=%d\n十位=%d\n百位=%d\n",g,sh,b);
 } 
