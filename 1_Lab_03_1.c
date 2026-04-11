#include <stdio.h>

int main() {
	int A, B;

	scanf_s("%d %d", &A, &B);

	if (A > B) {
		printf(">\n");
	}
	else if (A < B) {
		printf("<\n");
	}
	else {
		printf("==\n");
	}

	return 0;
}