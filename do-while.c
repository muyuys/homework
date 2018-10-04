#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned int number;
	unsigned int remainder,i=1,temp,save,count=1;
	unsigned short a5,a4,a3,a2,a1;
	printf ("输入一个整数：");
	scanf("%d",&number);
	save=number;
	if(number>99999||number<999)
	{
		printf("输入的数字不符合要求\n");
		exit(0);
	}
	while(count<=5)
	{
		do
		{
		remainder=number%10;
		switch(i)
		{
		case 1:a1=remainder;
		break;
		case 2:a2=remainder;
		break;
		case 3:a3=remainder;
		break;
		case 4:a4=remainder;
		break;
		case 5:a5=remainder;
		break;
		}
		number=number/10;
		i++;
		}
		while(remainder!=0) ;
		temp=a1;
		a1=a2,a2=a3,a3=a4,a4=a5,a5=temp;
		number=a5*10000+a4*1000+a3*100+a2*10+a1;
		printf("%u转动%u次是：%u\n",save,count,number);
		count++;
	}
	return 0;
 } 
