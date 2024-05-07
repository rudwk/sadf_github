#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	if (a / 10 == 10 || a / 10 == 9) {
		printf("A");
	}
	else if (a / 10 == 8 || a / 10 == 7) {
		printf("B");
	}
	else if (a / 10 < 5 && a / 10 >= 4) {
		printf("C");
	}
	else {
		printf("D");
	}
}