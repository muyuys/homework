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
	srand(time(NULL));          //用当前的时间做随机种子
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
		now=clock();                  //录入时间
		for(;clock()-now<=5000;){}
		printf("r");              //将输出光标移动到本行的开头（不回行）
		for(i=1;1<=6;i++)         //输出6个*，以便擦去曾经显示的字符串
		print("*")
		printf("输入刚才显示的字符串（回车确认)：\n");
		scanf("%c%c%c%c%c%c",&s1,&s2,&s3,&s4,&s5,&s6);
		temp=getchar();
		if(temp!'\n') 
		{
			printf("输入非法，程序退出！")；
			exit(0); 
		}
		if(c1==s1&&c2==s2&&c3==s3&&c4==s4&&c5==s5&&c6==s6)
		{
		score++;
		printf("恭喜你猜对了，记忆力不错！\n");
	    }
		else
		{
		printf("很遗憾，记得不准确\n");
		}
    	printf("继续测试吗？输入y或n（回车确认）")；
		ok=getchar();
		getchar();
		 
	}
	
 } 
