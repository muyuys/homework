#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
	long now;
	char c1,c2,c3,c4,c5,c6;
	char s1,s2,s3,s4,s5,s6;
	unsigned short score=0,i;
	char ok ='y',temp;
	srand(time(NULL));          //�õ�ǰ��ʱ�����������
    whlie(ok=='y'||ok=='Y') 
    {
    	ok='n';
    	c1=rand()%26+'a';
    	c2=rand()%26+'a';
    	c3=rand()%26+'a';
    	c4=rand()%26+'a';
    	c5=rand()%26+'a';
    	c6=rand()%26+'a';
    	printf("%c%c%c%c%c%c",c1,c2,c3,c4,c5,c6);
		now=clock();                  //¼��ʱ��
		for(;clock()-now<=5000;){}
		printf("r");              //���������ƶ������еĿ�ͷ�������У�
		for(i=1;1<=6;i++)         //���6��*���Ա��ȥ������ʾ���ַ���
		print("*")
		printf("����ղ���ʾ���ַ������س�ȷ��)��\n");
		scanf("%c%c%c%c%c%c",&s1,&s2,&s3,&s4,&s5,&s6);
		temp=getchar();
		if(temp!'\n') 
		{
			printf("����Ƿ��������˳���")��
			exit(0); 
		}
		if(c1==s1&&c2==s2&&c3==s3&&c4==s4&&c5==s5&&c6==s6)
		{
		score++;
		printf("��ϲ��¶��ˣ�����������\n");
	    }
		else
		{
		printf("���ź����ǵò�׼ȷ\n");
		}
    	printf("��������������y��n���س�ȷ�ϣ�")��
		ok=getchar();
		getchar();
		 
	}
	
 } 
