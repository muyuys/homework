#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int	main()
{
    int a,b,c;
	float s,area;
	printf("Please enter three bian:");
	scanf("%d,%d,%d",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nthe square is: %g",area);
	system("pause");
	return 0;
}