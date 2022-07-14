//打印菱形
#include<stdio.h>
int main()
{
	int i = 0;//i控制第几行
	int j = 0;//j控制每一行空格的循环次数
	int k = 0;//k控制每一行*的循环次数
	for (i = 1; i <= 4; i++)//将图形分为两部分，前四行(第一部分)
	{
		for (j = 1; j <= 4 - i; j++)//打印第i行的空格数
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++)//紧接着打印第i行的*数，注意要带乘号*
		{
			printf("*");
		}
		printf("\n");//第i行完成，要换行\n,进入下一行的循环
	}
	
	for (i = 1; i <= 3; i++)//后三行(第二部分)，和前四行同样的道理
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= 7 - 2 * i; k++)
		{
			printf("*");
		}
		printf("\n");//打印完一行后记得换行\n
	}
	return 0;
}
