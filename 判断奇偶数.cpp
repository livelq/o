#include<stdio.h>
int main()
{
	int x;
	printf("请输入一个整数:");
	scanf("%d",&x); 
	if (x%2==0)
		printf("%d是偶数\n",x);
	else
		printf("%d是奇数\n",x);
}
