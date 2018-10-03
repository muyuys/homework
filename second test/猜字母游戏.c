#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	char randomLetter;
	char guess;
	char c='A';
	while(c<='z')
	{
		printf("%3c",c);
		c++;
	}
	srand(time(NULL));                 /*用当前的时间做随机种子*/ 
	randomLetter=rand()%26+'A';
	printf("\n给你一个a~z之间的字母，请猜出这个字母。\n");
	printf("请输入你的猜测（回车确认）：")；
	guess=getchar();
	if(guess<+'z'&&guess>='a')
	guess=guess-32;                    /*变成大写字母*/ 
	getchar();                         /*消耗回车*/ 
	while(guess!=randomLetter)
	{
	if(guess>randomLetter)
	{printf("所猜测的字母大于给你的字母！\n");}
	else if(guess<randomLetter)
	{printf("所猜测的字母小于给你的字母！\n");}
	printf("再输入你的猜测（回车确认）：")；
	guess=getchar();
	if(guess<+'z'&&guess>='a')
	guess=guess-32;                    /*变成大写字母*/ 
	getchar();                         /*消耗回车*/ 
    } 
	printf("您猜对了，这个字母就是：%c\n",randomLetter);
	system("pause");
	return 0;
}
