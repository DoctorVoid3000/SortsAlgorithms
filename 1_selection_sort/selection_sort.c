#include <stdio.h>

#define SIZE 6

void selection_sort_algoritm(int *arr){
	
	int min_index = 0;
	int temp = 0;

	for (int i = 0; i < SIZE - 1; ++i)
	{
		min_index = i;

		for (int j = i + 1; j < SIZE; ++j)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}

		if (arr[min_index != arr[i]])
		{
			temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}


	}
}

void print_array(int *arr){
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d ", *(arr + i));
	}
}

void selection_sort(){

	int arr[SIZE] = {-3, 5, 0, -8, 1, 10};

	selection_sort_algoritm(arr);
	print_array(arr);
	printf("\n");
}