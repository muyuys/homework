#include<stdio.h>
#include<stdlib.h>
int	main()
{
    int a,b,c;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d",&a,&b,&c);
    printf("\n\nYou entered the date %d%02d%d",c,a,b);
	system("pause");
	return 0;
}