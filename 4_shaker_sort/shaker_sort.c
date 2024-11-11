#include <stdio.h>

#define SIZE 6

//*************Прототипы*************//

void input_sequnce(int*);

void swap(int*, int*);

void shaker_sort_algoritm(int*);

void print_sequnce(int*);

//*************main*************//
void shaker_sort()
{
	int sequance[SIZE] = {-3, 0, -8, 1, 5, 10};
	// int sequance[SIZE];
	// input_sequnce(sequance);
	shaker_sort_algoritm(sequance);
	print_sequnce(sequance);
}


//*************Реализация функций*************//

void input_sequnce(int *sequance)
{
	for (int i = 0; i < SIZE; ++i)
	{
		printf("input %d element of sequance: ", i+1);
		scanf("%d", sequance + i);
	}
}

void swap(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

void shaker_sort_algoritm(int *sequance)
{	
	int left = 0, right = SIZE - 1;
	int control = right;

	while(left < right){
		for (int i = left; i < right; ++i)
		{
			if (sequance[i] > sequance[i+1])
			{
				swap(&sequance[i], &sequance[i+1]);
				control = i;
			}
		}
		right = control;
		for (int i = right; i > left; --i)
		{
			if (sequance[i] < sequance[i-1])
			{
				swap(sequance[i], sequance[i-1]);
				control = i;
			}
		}
		left = control;
	}
}

void print_sequnce(int *sequance)
{
	for (int i = 0; i < SIZE; ++i){
		printf("%d ", sequance[i]);
	}
	printf("\n");
}