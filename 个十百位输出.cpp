#include<stdio.h>
int main()
{
	int x,g,sh,b;
	printf("������һ��������");
	scanf("%d",&x);
	g=x%10;
	sh=(x/10)%10;
	b=x/100;
	printf("��λ=%d\nʮλ=%d\n��λ=%d\n",g,sh,b);
 } 
