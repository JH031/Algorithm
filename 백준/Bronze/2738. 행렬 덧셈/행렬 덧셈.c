#include <stdio.h>

int main() {
	int n, m;

	int a[100][100] = { 0, };
	int b[100][100] = { 0, };

	scanf("%d %d", &n, &m);

	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			scanf("%d", &a[j][i]);
		}
	}
	
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			scanf("%d", &b[j][i]);
		}
	}

	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			printf("%d ", a[j][i]+b[j][i]);
		}
		printf("\n");
	}
}