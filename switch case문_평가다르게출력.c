#include <stdio.h>

int main() {
	char input;
	scanf("%s", &input);

	switch (input)
	{
	case 'A':
		printf("best!!!"); break;
	case 'B':
		printf("good!!"); break;
	case 'C':
		printf("run!"); break;
	case 'D':
		printf("slowly~"); break;
	default:
		printf("what?");
	}
}