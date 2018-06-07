#include<stdio.h>
#include<stdlib.h>
int main()
{
				int m,n;
				printf("Enter rows and columns: ");
				scanf("%d %d", &m, &n);
				int *arr[m];
				for(int i = 0; i<m; i++)
								arr[i] = (int *)malloc( n*sizeof(int));
				for(int i=0; i<m; i++) 
				{
								printf("Enter elements of %d row: ", i+1);
								for(int j=0; j<n; j++)
												scanf("%d", &arr[i][j]);
				}
				for(int i=0; i<m; i++)
				{
								for( int j=0; j<n; j++)
												printf("%d\t",arr[i][j]);
								putchar('\n');
								free(arr[i]);
				}
				return 0;
}
