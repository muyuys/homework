#include<stdio.h>
#include<stdlib.h> 
int main()
{
	unsigned short money;
	char drink_kind;
	printf("Ͷ���2��3��5Ԫ���س�ȷ�ϣ���");
	scanf("%d", &money);
	getchar(); /*���Ļس�*/
	if (money == 2)
	{
		printf("ѡ���¶��A����ũ��ɽȪ��B���Ͱ���ɽ��C��֮һ��\n");
		printf("����A��B��C��");
		drink_kind = getchar();
		switch (drink_kind)
		{
		case'A':printf("�õ���¶\n");
			break;
		case'B':printf("�õ�ũ��ɽȪ\n");
			break;
		case'C':printf("�õ�����ɽ\n");
			break;
		default:printf("ѡ�����");
		}
	}
	else if (money == 3)
	{
		printf("ѡ����֣�A����ѩ�̣�B������֭Դ��C��֮һ��\n");
		printf("����A��B��C��");
		drink_kind = getchar();
		switch (drink_kind)
		{
		case'A':printf("�õ�����\n");
			break;
		case'B':printf("�õ�ѩ��\n");
			break;
		case'C':printf("�õ���֭Դ\n");
			break;
		default:printf("ѡ�����");
		}
	}
	else if (money == 5)
	{
		printf("ѡ���̲裨A�������ȣ�B�������̣�C��֮һ��\n");
		printf("����A��B��C��");
		drink_kind = getchar();
		switch (drink_kind)
		{
		case'A':printf("�õ��̲�\n");
			break;
		case'B':printf("�õ�����\n");
			break;
		case'C':printf("�õ�����\n");
			break;
		default:printf("ѡ�����");
		}
	}
	else
	{
		printf("������벻����Ҫ��");
	}
	system("pause");
	return 0;
}

