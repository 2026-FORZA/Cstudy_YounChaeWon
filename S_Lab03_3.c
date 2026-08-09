#include <stdio.h>

char prime[10000001];

int main(void) {
    int m, n;
    int i, j, count = 0;

    scanf("%d %d", &m, &n);

    for (i = 2; i <= n; i++) {
        prime[i] = 1;
    }

    for (i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (j = i * i; j <= n; j += i) {
                prime[j] = 0;
            }
        }
    }

    for (i = m; i <= n; i++) {
        if (prime[i]) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}