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
	srand(time(NULL));                 /*�õ�ǰ��ʱ�����������*/ 
	randomLetter=rand()%26+'A';
	printf("\n����һ��a~z֮�����ĸ����³������ĸ��\n");
	printf("��������Ĳ²⣨�س�ȷ�ϣ���")��
	guess=getchar();
	if(guess<+'z'&&guess>='a')
	guess=guess-32;                    /*��ɴ�д��ĸ*/ 
	getchar();                         /*���Ļس�*/ 
	while(guess!=randomLetter)
	{
	if(guess>randomLetter)
	{printf("���²����ĸ���ڸ������ĸ��\n");}
	else if(guess<randomLetter)
	{printf("���²����ĸС�ڸ������ĸ��\n");}
	printf("��������Ĳ²⣨�س�ȷ�ϣ���")��
	guess=getchar();
	if(guess<+'z'&&guess>='a')
	guess=guess-32;                    /*��ɴ�д��ĸ*/ 
	getchar();                         /*���Ļس�*/ 
    } 
	printf("���¶��ˣ������ĸ���ǣ�%c\n",randomLetter);
	system("pause");
	return 0;
}
