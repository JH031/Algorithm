#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int a = n / 10;
	int b = n % 10;
	int c = a + b;
	int m = 0;

	if (c % 10 == 0) {
		m = b * 10;
	}
	else {
		m = b * 10 + (c % 10);
	}
	
	int cnt = 1;

	while (m != n) {
		a = m / 10;
		b = m % 10;
		c = a + b;

		if (c % 10 == 0) {
			m = b * 10;
		}
		else {
			m = b * 10 + (c % 10);
		}

		cnt++;
	}

	printf("%d", cnt);
	
}