#include <stdio.h>
#include <string.h>

int main() {
	char a[100];
	scanf("%s", a);
	int cnt = strlen(a);
	
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == '=') {
			if (a[i - 1] == 'c') cnt--;
			if (a[i - 1] == 's') cnt--;
			if (a[i - 1] == 'z') {
				cnt--;
				if (a[i - 2] == 'd') cnt--;
			}
		}
		if (a[i] == '-') {
			if (a[i - 1] == 'c') cnt--;
			if (a[i - 1] == 'd') cnt--;
		}
		if (a[i] == 'j') {
			if (a[i - 1] == 'l') cnt--;
			if (a[i - 1] == 'n') cnt--;
		}
	}
	printf("%d", cnt);
}