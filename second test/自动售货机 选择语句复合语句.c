#include<stdio.h>
#include<stdlib.h> 
int main()
{
	unsigned short money;
	char drink_kind;
	printf("投入金额：2，3，5元（回车确认）：");
	scanf("%d", &money);
	getchar(); /*消耗回车*/
	if (money == 2)
	{
		printf("选择冰露（A），农夫山泉（B）和百岁山（C）之一：\n");
		printf("输入A，B或C：");
		drink_kind = getchar();
		switch (drink_kind)
		{
		case'A':printf("得到冰露\n");
			break;
		case'B':printf("得到农夫山泉\n");
			break;
		case'C':printf("得到百岁山\n");
			break;
		default:printf("选择错误");
		}
	}
	else if (money == 3)
	{
		printf("选择可乐（A），雪碧（B）和美汁源（C）之一：\n");
		printf("输入A，B或C：");
		drink_kind = getchar();
		switch (drink_kind)
		{
		case'A':printf("得到可乐\n");
			break;
		case'B':printf("得到雪碧\n");
			break;
		case'C':printf("得到美汁源\n");
			break;
		default:printf("选择错误");
		}
	}
	else if (money == 5)
	{
		printf("选择奶茶（A），咖啡（B）和酸奶（C）之一：\n");
		printf("输入A，B或C：");
		drink_kind = getchar();
		switch (drink_kind)
		{
		case'A':printf("得到奶茶\n");
			break;
		case'B':printf("得到咖啡\n");
			break;
		case'C':printf("得到酸奶\n");
			break;
		default:printf("选择错误");
		}
	}
	else
	{
		printf("金额输入不符合要求");
	}
	system("pause");
	return 0;
}

