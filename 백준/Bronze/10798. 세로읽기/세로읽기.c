#include <stdio.h>

int main() {
	char arr[5][16] = {0};
	char answer[76] = " ";
	int col = 0;
	int k = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%s", arr[i]);
	}
	
	for (int i = 0; i < 5; i++) {
		if (strlen(arr[i]) > col) col = strlen(arr[i]);
	}

	
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < 5; j++) {
			if (i<strlen(arr[j])&&arr[j][i] != ' ') {
				answer[k++]=arr[j][i];
			} 
		}
	}
	answer[k] = '\0';
	printf("%s", answer);
}