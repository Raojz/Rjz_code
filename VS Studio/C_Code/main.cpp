#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	int num = 0;
	printf("hello world\n");
	printf("输入一个整数：\n");
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("%d是偶数\n",num);
	}
	else
	{
		printf("%d是奇数\n", num);
	}
	return 0;
}