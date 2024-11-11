#include <stdio.h>
#include "my_lib.h"

#define SIZE 6
int main(void){

	int arr[SIZE] = {-3, 5, 0, -8, 1, 10};

	babel_sort_algoritm(arr, SIZE);
	print_array(arr, SIZE);
	printf("\n");
	return 0;
}
