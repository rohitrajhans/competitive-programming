#include<stdio.h>

void insertionSort(int arr[], int n)
{
				int key,j,i;
				for(i =0; i<n; i++ )
				{
								key = arr[i];
								j = i-1;
								while( j >=0 && (arr[j]>key) )
								{
												arr[j+1] = arr[j];
												j--;
								}
								arr[j+1] = key;
				}
}
int main()
{
				int arr[] = {1,2,4,2,3,5};
				insertionSort(arr, 5);
				return 0;
}
