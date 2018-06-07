#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * itoa( int, char *, int);

int main()
{
				char *s = "1.23";
				double s2 = atof(s);
				printf("%lf\n", s2);
				int s3 = 100;
				char s4[4];
				itoa( s3, s4, 10);
				printf("%s\n", s4);
				return 0;
}

