#include <stdio.h>

int main() {
	char a = 'a', b;
	scanf_s("%c", &b);

	do {
		printf("%c", a);
		a += 1;
	} while (a != b);
}