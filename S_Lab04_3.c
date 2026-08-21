#include <stdio.h>

int a[1000][1000];
int greaterCnt[1000][6];

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        int cnt[6] = {0};

        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
            cnt[a[i][j]]++;
        }

        for (int v = 1; v <= 5; v++) {
            greaterCnt[i][v] = 0;
            for (int x = v + 1; x <= 5; x++) {
                greaterCnt[i][v] += cnt[x];
            }
        }
    }

    for (int k = 0; k < m; k++) {
        int answer = 0;

        for (int i = 0; i < n; i++) {
            int cur = a[i][k];
            int best = 1000000000;

            for (int v = 1; v <= 5; v++) {
                int cost = 0;

                if (cur != v) cost++;

                cost += greaterCnt[i][v];
                if (cur > v) cost--;

                if (cost < best) best = cost;
            }

            answer += best;
        }

        printf("%d", answer);
        if (k + 1 < m) printf(" ");
    }

    printf("\n");
    return 0;
}
