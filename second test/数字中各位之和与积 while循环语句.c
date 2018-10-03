#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned short number;
	unsigned short remainder;
	unsigned short sum=0,ji=1,temp=0;
	printf("输入一个整数：");
	scanf("%d",&number);
	temp=number;
	while(number!=0)
	{
		remainder= number%10;
	    sum=sum+remainder;
		ji=ji*remainder;
		number=number/10;
	}
    printf("%u上各位数字的和为：%u\n",temp,sum);
	printf("%u上各位数字的积为：%u\n",temp,ji);
	system("pause");
	return 0;

}