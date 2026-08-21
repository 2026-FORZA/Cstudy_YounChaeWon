#include <stdio.h>

int a[105][105];

int main(void) {
    int n;
    scanf("%d", &n);

    int num = 1;

    for (int s = 0; s <= 2 * (n - 1); s++) {
        int r, c;

        if (s % 2 == 0) {
            c = s < n ? s : n - 1;
            r = s - c;

            while (r < n && c >= 0) {
                a[r][c] = num++;
                r++;
                c--;
            }
        } else {
            r = s < n ? s : n - 1;
            c = s - r;

            while (r >= 0 && c < n) {
                a[r][c] = num++;
                r--;
                c++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
