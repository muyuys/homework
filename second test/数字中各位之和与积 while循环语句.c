#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned short number;
	unsigned short remainder;
	unsigned short sum=0,ji=1,temp=0;
	printf("����һ��������");
	scanf("%d",&number);
	temp=number;
	while(number!=0)
	{
		remainder= number%10;
	    sum=sum+remainder;
		ji=ji*remainder;
		number=number/10;
	}
    printf("%u�ϸ�λ���ֵĺ�Ϊ��%u\n",temp,sum);
	printf("%u�ϸ�λ���ֵĻ�Ϊ��%u\n",temp,ji);
	system("pause");
	return 0;

}