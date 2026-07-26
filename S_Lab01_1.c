#include <stdio.h>

int main() {
    int p, q;
    scanf("%d %d", &p, &q);

    int count = 0;

    for (int i = 1; i <= p; i++) {
        if (p % i == 0) {
            count++;
            if (count == q ) {
                printf("%d", i);
                return 0;
            }
        }
    }

    printf("0");
    return 0;
}
