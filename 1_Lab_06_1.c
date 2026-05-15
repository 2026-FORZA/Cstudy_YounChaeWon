#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char str[1001];

	scanf_s("%s", str, 1001);

	int len = (int)strlen(str);

	for (int i = 0; i < len; i++) {
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
		else if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}
	}

	printf("%s\n", str);
	
	return 0;
}