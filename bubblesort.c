#include <stdio.h>

#define MAX 6

void result_print(int a, int arr[]);
void swap(int* a, int* b);
void bubble_sort(int k, int j, int arr[]);

int main()
{
	int arr[MAX] = { 5,1,3,4,2,6 };

	printf("before array : ");
	result_print(MAX, arr);
	bubble_sort(MAX, 5, arr);
	printf("sorted array : ");
	result_print(MAX, arr);
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void result_print(int a, int arr[])
{
	for (int a=0; a < MAX; a++)
	{
		printf("%d ", arr[a]);
	}
	printf("\n");
}

void bubble_sort(int k, int j, int arr[])
{	
	for (int k=0; k < MAX; k++)
	{
		for (int j=0; j < MAX-k-1; j++)
		{
			if ( arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}
