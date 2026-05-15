#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[1001];

	if (fgets(str, sizeof(str), stdin) != NULL) {
		
		int len = (int)strlen(str);

		if (len > 0 && str[len - 1] == '\n') {
			len--;
		}

		printf("%d\n", len);
	}
	return 0;
}