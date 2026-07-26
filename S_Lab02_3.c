#include <stdio.h>

int main(void) {
    int k;
    int dir[6], len[6];
    int max_w = 0, max_h = 0;
    int idx_w = 0, idx_h = 0;

    scanf("%d", &k);

    for (int i = 0; i < 6; i++) {
        scanf("%d %d", &dir[i], &len[i]);

        if (dir[i] == 1 || dir[i] == 2) {
            if (len[i] > max_w) {
                max_w = len[i];
                idx_w = i;
            }
        } else {
            if (len[i] > max_h) {
                max_h = len[i];
                idx_h = i;
            }
        }
    }

    int small_w = len[(idx_h + 3) % 6];
    int small_h = len[(idx_w + 3) % 6];
    int area = max_w * max_h - small_w * small_h;

    printf("%d", area * k);

    return 0;
}
