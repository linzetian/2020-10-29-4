//写一个函数求a二进制（补码）中有几个1//方法1
#include<stdio.h>
int count_binary(unsigned int n)//用unsigned不管是负数还是正数，都先视为正的
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}
int main()
{
	int a = 0;
	printf("输入a：");
	scanf("%d", &a);
	int ret=count_binary(a);//当输入-1就会出现问题了，所以要进行改进
	printf("1的个数：%d\n",ret);
	return 0;
}