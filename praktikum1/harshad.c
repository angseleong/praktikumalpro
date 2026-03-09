#include <stdio.h>

int main() {

    int N;
    int total = 0;
    int tes;
    scanf("%d", &N);

    int value = N;

    while (value>=1 && value <= 1000000000) {
        
        total += value % 10;
        value /= 10;

    }

    if (N % total == 0) 
    {
        printf("1");
    } 
    
    else {
        printf("0");
    }

    printf("\n");
    return 0;
}