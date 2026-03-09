#include <stdio.h>

int get_first_digit(int num) {
    while (num >= 10) {
        num /= 10;
    }
    return num;
}

int get_last_digit(int num) {
    return num % 10;
}

int get_digit_sum(int num) {
    return get_first_digit(num) + get_last_digit(num);
}

int main() {
    int D, M;
    scanf("%d %d", &D, &M);
    
    while (1) {
        int sum_D = get_digit_sum(D);
        int sum_M = get_digit_sum(M);
        
        D = D - sum_M;
        M = M - sum_D;
        
        if (D == M) {
            printf("Wattles\n");
            break;
        } else if (D < 0 && M < 0) {
            printf("Wattles\n");
            break;
        } else if (D < 0) {
            printf("Mebel\n");
            break;
        } else if (M < 0) {
            printf("Deeper\n");
            break;
        }
    }
    
    return 0;
}