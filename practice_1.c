#include<stdio.h>
#include<stdlib.h>
int * randomArray ( int *arr, int n); 
int main()
{
				int arr[10] = {1,2,3};
				int *arr2;
				arr2 = (int *)randomArray( arr, 10);
				printf("%d\n", arr2[1]);
				return 0;
}

int * randomArray ( int *arr, int n) 
{
				int nz=0;
		    for(int i=0; i<n; i++)
								if( arr[i] == 0 )
												nz++;
				int* NZ;
				NZ = malloc( sizeof(int)*nz);
				NZ[0] = 21;
				NZ[1] = nz;
				return NZ;
}

