#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            int nomor_stiker = (i * (i - 1)) / 2 + j;
            printf("%d ", nomor_stiker);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
