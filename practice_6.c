#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXCOL 20

void storeSubStr( char * str, char *substr[]);
int main()
{
				char str[MAXCOL];
				printf("Enter a string: ");
				scanf("%s", str);
				int length = strlen(str);
				char *substr[length*(length+1)/2];
				storeSubStr( str, substr);
				for(int i = 0; i<length*(length+1)/2; i++) 
								printf("%s\n", substr[i]); 
				return 0;
}

void storeSubStr( char *str, char *substr[])
{
				int length = strlen(str);
				int j,i, k, index=0, count = 0;
				for( i = 0; i<length; i++)
				{
								for( j = 1; j<=length-i; j++  ) 
								{
												k=i;
												substr[index] = malloc( sizeof(char)*(j+1) );
												for(count = 0; count < j; count++)
												{
																substr[index][count] = str[k];
																k++;
												}
												substr[index][j] = '\0';
												index++;
								}
				}
				return;
}
												
