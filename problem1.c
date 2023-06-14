#include <stdio.h>
#include <stdlib.h>
void printArray(int *arr, int size) {
	printf("Index\tAddress \tValue\n");
	for(int i = 0; i < size; i++) {
		printf("%d\t%07x \t%d\n", i, (arr+i), *(arr+i));
	}
}
int main() {
	int size;
	printf("Enter Array Size - ");
	scanf("%d", &size);

	int arr[size];
	for(int i = 0; i < size; i++) {
		printf("Enter Element[%d] - ", i);
		scanf("%d", &arr[i]);
	}

	printArray(arr, size);

	return 0;
}