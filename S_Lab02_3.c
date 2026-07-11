#include <stdio.h>

int main() {
    char s[51];
    scanf("%s", s);

    int dash[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int sum = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        sum += dash[s[i] - '0'];
    }

    printf("%d", sum);

    return 0;
}