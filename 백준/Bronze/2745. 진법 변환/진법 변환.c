#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	char n[100] = {0,}; //숫자
	int b = 0; //진법

	scanf("%s %d", n, &b);

	int len = strlen(n);
	int answer = 0;

	for (int i = 0; i <len; i++) {
		int value;
		if (n[i] >= 'A' && n[i] <= 'Z') {
			value = n[i] - 'A' + 10;
		}
		else {
			value = n[i] - '0';
		}
		answer += value * pow(b, len - 1 - i);
	}
	printf("%d", answer);

}