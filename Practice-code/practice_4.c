#include<stdio.h>
#include<string.h>
#define MAXVALUE 128
char getMaxChar(char *, int);
void toLowerCase(char *);

int main()
{
				char arr[100];
				printf("Enter a string: ");
				scanf("%[^\n]", arr);
				toLowerCase(arr);
				char max = getMaxChar(arr, strlen(arr));
				printf("%c\n", max);
				return 0;
}

void toLowerCase(char *arr) {
				int i =0;
				while( arr[i] !='\0')
				{
								if( (arr[i] >= 'A') && (arr[i] <= 'Z') )
												arr[i] = arr[i] - 'A' + 'a';
								i++;
				}
				return;
}

char getMaxChar(char *arr, int length) {
				int count[MAXVALUE] = {0};
				int i = 0;
				while( arr[i] != '\0') 
								count[arr[i++]]++;
				int max = -1;
				char result;
				for(i=0; i<length; i++)
								if( max < count[arr[i]] )
								{
												max = count[arr[i]];
												result = arr[i];
								}
				printf("%d\n", max);
				return result;
}

