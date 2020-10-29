////写一个函数求a二进制（补码）中有几个1（方法3）
#include<stdio.h>
int count_binary(int n)
{
	int i = 0;
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
//13
//1101 n
//1100 n-1
//1100 n --->	n = n & (n - 1)
//1011 n-1
//1000 n
//0111 n-1
//0000 n
//规律：n=n&(n-1)
int main()
{
	int a = 0;
	printf("输入a：");
	scanf("%d", &a);
	int ret = count_binary(a);
	printf("ret=%d\n", ret);
	return 0;
}