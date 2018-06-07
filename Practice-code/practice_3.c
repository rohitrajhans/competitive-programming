#include<stdio.h>
#include<string.h>
void trimString(char*, char*);

int main()
{
				char arr[100], arr2[100];
				printf("Enter a string: ");
				scanf("%[^\n]", arr);
				trimString(arr,arr2);
				printf("%s\n", arr2);
				return 0;
}

void trimString(char* arr, char* marker)
{
				int c=1;
				marker[0] = arr[0];
				//printf("%c %c\n", arr[0], marker[0]);
				for( int i=1; i<strlen(arr); i++)
				{
								int flag = 0;
								for(int j=0; j<c; j++)
								{
												if(arr[i] == marker[j])
												{
																flag = 1;
																//printf("%d %d\n", i, j);
																break;
												}
								}
							  
								if(!flag)
								{
												marker[c++] = arr[i];
												//printf("%c %d\n", marker[c-1], c-1);
								}
								else 
								{
												//printf("%c %d\n", arr[i], i);
												continue;
								}
				}
				marker[c] = '\0';
				return;
}

																	
												
												
