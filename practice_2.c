#include<stdio.h>
#include<string.h>
#include<malloc.h>
int getIdealLength( char * );
char* createIdealString( char *, int);

int main()
{
				char arr[100];
				printf("Enter a string: ");
				scanf("%[^\n]", arr);
				int length = getIdealLength(arr);
				printf("Ideal length: %d, Actual Length: %ld \n", length, strlen(arr));
				printf("%s\n", arr);
				char *arr2;
				arr2 = createIdealString(arr,length);
				printf("%s\n", arr2);
				return 0;
}

int getIdealLength(char *arr)
{
				int length=0, i=0;
				while( arr[i] != '\0')
				{
								if(arr[i] == ' ') {
												//putchar(arr[i-1]);
												//putchar(arr[i]);
												//putchar(arr[i+1]);
												if (arr[++i] == ' ')
																length++;
												else i++;
								}
								else i++;
				}
				//if(length!=0) length--;
				return strlen(arr) - length;
}

char* createIdealString( char *str, int length)
{
				char *str2;
				int i = 0, j=0;
				str2 = (char *)malloc( sizeof(char) * length);
				while(str[i] != '\0')
				{
								if(str[i] != ' ')
								{
												str2[j++] = str[i++];
												continue;
								}
								else 
								{
												if(str[i+1] != ' ')
												{
																str2[j++] = str[i++];
																continue;
												}
												else
												{
																i++;
																continue;
												}
								}
				}
				str2[length] = '\0';
				return str2;
}
