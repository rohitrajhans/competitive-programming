#include<stdio.h>

int main()
{
	int x;
	float y;
	scanf("%d %f", &x, &y);
	if( (x%5 == 0) && (x <= y - 0.5) )
		y -= x + 0.5;
	printf("%.2f\n", y);
	return 0;
}