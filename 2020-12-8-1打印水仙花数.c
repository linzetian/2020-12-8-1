//打印水仙花数
//打印0-100000之间的水仙花数（每位数的总位数之和等于该数：水仙花数），例如153=1^3+5^3+3^3
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i <= 100000; i++)
	{
		int tep = i;
		int n = 1;
		int sum = 0;//为什么sum放在这里结果不一样
		while (tep /= 10)
		{
			n++;
		}
		tep = i;
		while (tep )
		{
			sum +=pow(tep%10,n);//因为pow为double数据类型
			tep /= 10;
		}
		if (sum == i)
			printf("%d ",i);
	}
	return 0;
}