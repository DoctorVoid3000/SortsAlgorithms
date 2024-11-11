#include <stdio.h>

#define SIZE 6

//*************Прототипы*************//

void input_sequnce(int*);

void swap(int*, int*);

void shell_sort_algoritm(int*);

void print_sequnce(int*);


//*************main*************//
void shell_sort()
{
	int sequance[SIZE] = {-3, 0, -8, 1, 5, 10};
	// int sequance[SIZE];
	// input_sequnce(sequance);
	shell_sort_algoritm(sequance);
	print_sequnce(sequance);
}

//*************Реализация функций*************//

void input_sequnce(int *sequance)
{
	for (int i = 0; i < SIZE; ++i){
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

void shell_sort_algoritm(int *sequance)
{	
	int step = SIZE/2;
	int i = step, j = 0;

	while(step > 0){
		for (int i = step; i < SIZE; ++i){
			j = i;
			while(j >= step && sequance[j] < sequance[j - step]){
				//printf("j = %d, j - step = %d, sequance[j] = %d, sequance[j - step] = %d\n", j, j - step, sequance[j], sequance[j - step]);
				swap(&sequance[j], &sequance[j - step]);
				j = j - step;
			}
		}
		step /= 2;
	}
}

void print_sequnce(int *sequance)
{
	for (int i = 0; i < SIZE; ++i){
		printf("%d ", sequance[i]);
	}
	printf("\n");
}