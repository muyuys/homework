/*数学上用sin（x）=x/1-x^3/3!+x^5/5!-x^7/7!+……*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	unsigned short i;
	unsigned long n-1,jiecheng=1;
	short fuhao=1;
	double sum=0,x=1,item=x/jiecheng;
	double t=x*x,temp=x;
	printf("输入x的值（在0到Π/2之间即可）：")；
	scanf("%lf",&x);
	item=x/jiecheng;
	t=x*x;
	temp=x;
	for(;ite>=1E-5;)
	{
		sum=sum+fuhao*ite;
		fuhao=-fuhao;
		x=t*x;
		n=n+2;
		for(i=1,jiecheng=1;i<=n;i++)
		{
		jiecheng=jiecheng*i;
		}
		item=x/jiecheng;
		printf("for语句计算结果是：\n%11.101f\n",sum)
		printf("库函数计算结果是:\n%11.101f\n",sin(temp));
		system("pause");
	} 
 } 
