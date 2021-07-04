#include <stdio.h>

#define MAX 7

void shell_sort(int arr[], int n);
void result_print(int arr[]);

int main()
{
	int arr[MAX]={1,6,5,2,7,3,4};

	printf("before array : ");
	result_print(arr);
	shell_sort(arr, MAX);
	printf("sorted array : ");
	result_print(arr);
	
	return 0;
}

void shell_sort(int arr[], int n)
{
	int i, j, mid, val;	

	for (mid = n/2; mid >=1; mid /=2)
	{
		for(i=mid; i<n; i++)
		{
			val = arr[i];
			for (j=i; j>=mid && arr[j-mid]>val; j=j-mid)
			{
				arr[j] = arr[j-mid];
			}
			arr[j] = val;
		}
	}
}

void result_print(int arr[])
{
	for (int a=0; a < MAX; a++)
	{
		printf("%d ", arr[a]);
	}
	printf("\n");
}
