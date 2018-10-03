#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter a number between 0 to 32767:");
	scanf("%d",&a);
	b=a%8,c=a/8%8,d=a/64%8,e=a/512%8,f=a/4096%8;
	printf("\nIn octal,your number is: %d%d%d%d%d",f,e,d,c,b);
	system("pause");
	return 0;
}
