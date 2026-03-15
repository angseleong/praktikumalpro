#include <stdio.h>

int fpb(int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int n;
    scanf("%d", &n);
    int kristal[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &kristal[i]);
    }

    int g = kristal[0];
    for (int i = 1; i < n; i++) {
        g = fpb(g, kristal[i]);
    }

    long long total = 0;
    for (int i = 0; i < n; i++) {
        total += kristal[i] / g;
    }

    printf("%lld\n", total);
    return 0;
}