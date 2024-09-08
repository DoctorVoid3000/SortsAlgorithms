#include <stdio.h>

void babel_sort_algoritm(int *arr, int size){

	int temp = 0;
	int flag = 0;

	for (int k = size; k > 1; --k)
	{
	
		flag = 0;
		
		for (int i = 0; i < k - 1; ++i)
		{
			if (arr[i] > arr[i+1])
			{
				temp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = temp;
				flag += 1;
			}
		}
		if(flag == 0){break;}
	}
	
}

void print_array(int *arr, int size){
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", *(arr + i));
	}
}