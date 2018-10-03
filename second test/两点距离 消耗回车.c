#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main()
{
	float x1,x2,y1,y2,d;
	printf("Please input the coordinates of two points:\n");
	printf("point1(x,y):");
	scanf("(%f,%f)",&x1,&y1);
	printf("\npoint2(x,y):");
	scanf(" (%f,%f)",&x2,&y2);
	d=sqrtf((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("\nthe distance between points and is:%.4f",x1,y1,x2,y2,d);
	system("pause");
	return 0;
}