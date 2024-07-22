#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 0;
	scanf("%d", &t);

	int* arr = (int*)malloc(sizeof(int) * t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < t; i++) {
		printf("%d %d %d %d\n", arr[i] / 25, (arr[i] % 25) / 10, ((arr[i] % 25) % 10) / 5, (((arr[i] % 25) % 10) % 5)/1);
	}

	free(arr);
}