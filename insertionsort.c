#include <stdio.h>

#define MAX 7

void result_print(int arr[]);
void insertion_sort(int n, int arr[]);
void swap(int* a, int* b);

int main()
{
	int arr[MAX] = {7,5,2,1,4,6,3};

	printf("before array : ");
	result_print(arr);
	insertion_sort(MAX, arr);
	printf("sorted array : ");
	result_print(arr);

	return 0;
}

void result_print(int arr[])
{
	for (int a=0; a < MAX; a++)
	{
		printf("%d ", arr[a]);
	}
	printf("\n");
}

void insertion_sort(int n, int arr[])
{
	for (int i=0; i < n; i++)
	{
		int j = i;
		while (j > 0 && arr[j] < arr[j-1])
		{
			swap(&arr[j], &arr[j-1]);
			j--;
		}
		// result_print(MAX, arr); // iteration print
	}
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
