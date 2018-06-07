#include<stdio.h>
#include<math.h>
#include <string.h>
int toNumber( char *);

int main()
{
				char number_string[20];
				printf("Enter a number string: ");
				scanf("%s", number_string);
				printf("String = %s\n", number_string);
				int number = toNumber ( number_string );
				printf("Number = %d\n", number);
				return 0;
}

int toNumber ( char number[] ) 
{
				int i = 0, num=0;
				int len = strlen(number);
				for ( int i = 0; i<len; i++)
				{
								num += (number[len-(i+1)] - '0')*pow(10,i);
				}
				return num;
}

	
