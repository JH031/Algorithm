#include <stdio.h>

int main() {
	int a, b;
	int n = 0;
	int answer = 0;

	scanf("%d %d", &a, &b);

	for (int i = 1; i <= a; i++) {
		if (a % i == 0) n++;
		if (n == b) {
			printf("%d", i);
			return 0;
		}
	}
	printf("%d", 0);
}