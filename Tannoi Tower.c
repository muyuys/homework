# include<stdio.h>
unsigned short move(int,char,char,char);
unsigned short move(int n,char one,char two,char three)
{
	static unsigned short count=0;
	count++;
	if (n==1)
	{pritf("from%c to %c\n",one,three);}
	else if(n>=2)
	{
	 count =move(n-1,one,three,two);
	 pritf("from%c to %c\n",one,three);
	 count=move(n-1,two,one,three);
	}
	renturn count;
	
}
int main()
{
	unsigned short mi,m2=0;
	printf("\nA座有2个盘子的情况:\n");
	m1=move(2,'A','B','C');
	printf("\nA座有3个盘子的情况:\n");
	m2=move(3,'A','B','C');
    printf("小和尚共花费了%%u天。\n",m2-m1);
    return 0;
}

