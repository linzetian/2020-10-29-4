//写一个函数求a二进制（补码）中有几个1（方法2）
#include<stdio.h>
int count_binary(int n)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((n >> i) & 1 == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int a = 0;
	printf("输入a：");
	scanf("%d",&a);
	int ret = count_binary(a);
	printf("ret=%d\n",ret);
	return 0;
}