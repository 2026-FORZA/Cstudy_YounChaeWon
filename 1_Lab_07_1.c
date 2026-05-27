#include <stdio.h>

typedef struct {
    char name[11];
    int score[3];
} Student;

int main(void) {
    int n;
    Student s[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", s[i].name, &s[i].score[0], &s[i].score[1], &s[i].score[2]);
    }

    int first = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].score[0] > s[first].score[0]) {
            first = i;
        }
    }

    int rank2 = 1;
    int rank3 = 1;

    for (int i = 0; i < n; i++) {
        if (s[i].score[1] > s[first].score[1]) rank2++;
        if (s[i].score[2] > s[first].score[2]) rank3++;
    }

    printf("%s %d %d", s[first].name, rank2, rank3);

    return 0;
}