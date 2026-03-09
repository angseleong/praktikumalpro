#include <stdio.h>
// n --> genap:2, ganjilx3+1
int main() {
    int n;
    int langkah = 0;
    scanf("%d", &n);

    while(n != 1)
    {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        langkah += 1;
    }

    printf("%d", langkah);

    printf("\n");
    
    return 0;
}