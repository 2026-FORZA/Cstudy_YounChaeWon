#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10001];
    int koi = 0, ioi = 0;

    scanf("%s", s);

    int len = strlen(s);
    for (int i = 0; i <= len - 3; i++) {
        if (s[i] == 'K' && s[i + 1] == 'O' && s[i + 2] == 'I') {
            koi++;
        }
        if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I') {
            ioi++;
        }
    }

    printf("%d\n%d\n", koi, ioi);

    return 0;
}
