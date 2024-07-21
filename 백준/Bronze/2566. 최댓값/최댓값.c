#include <stdio.h>

int main() {
	
	int arr[9][9] = { 0, };
	int max = 0;
	int row = 0;
	int col = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
				row = i; col = j;
			}
		}
	}
	printf("%d\n%d %d", max, row+1, col+1);
}