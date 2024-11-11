#include <stdio.h>
#include <math.h>

#define SIZE 6

//*************Прототипы*************//

void input_sequnce(int*);

void swap(int*, int*);

void comb_sort_algoritm(int*);

void print_sequnce(int*);


//*************main*************//
void comb_sort()
{
	//int sequance[SIZE] = {-3, 0, -8, 1, 5, 10};
	int sequance[SIZE];
	input_sequnce(sequance);
	comb_sort_algoritm(sequance);
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

void comb_sort_algoritm(int *sequance)
{	
	int step = SIZE;
	int swaps = 0;

	while(!(step <= 1 && swaps == 0)){
		step = step/1.247;
		if (step == 0)
			step = 1;
		swaps = 0;
		for (int i = 0; i + step < SIZE; i+= step){
			if (sequance[i] > sequance[i + step]){
				swap(&sequance[i], &sequance[i + step]);
				swaps += 1;
			}
		}
		printf("swaps = %d, step = %d\n", swaps, step);
		// if(step == 1 && swaps == 0)
		// 	break;
	}
}

void print_sequnce(int *sequance)
{
	for (int i = 0; i < SIZE; ++i){
		printf("%d ", sequance[i]);
	}
	printf("\n");
}