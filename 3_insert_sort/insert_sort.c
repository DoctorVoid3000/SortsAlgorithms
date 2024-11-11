#define SIZE 6

void swap(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

void insert_sort_algoritm(int *arr){
	int j = 0;

	for (int i = 1; i < SIZE; ++i)
	{
		j = i;
		while(j > 0 && arr[j] < arr[j-1]){
			swap(&arr[j], &arr[j-1]);
			j--;
		}
	}
}

void print_array(int *arr){
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d ", *(arr + i));
	}
}

void insert_sort(){

	int arr[SIZE] = {-3, 5, 0, -8, 1, 10};
	//int arr[SIZE] = {7, 6, 5, 4, 3, 2};

	insert_sort_algoritm(arr);
	print_array(arr);
	printf("\n");
}