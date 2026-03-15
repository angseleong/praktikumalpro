#include <stdio.h>

//bilangan cipher
//x = prima
//semua digit prima
//jumlah semua digit = prima

int prima(int n){
    if (n<=1) return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int digitPrima(int n){
    while (n != 0) {
        int digit = n % 10;
        if (!prima(digit)) return 0;
        n /= 10;
    }
    return 1;
}

int jumlahDigit(int n){
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int cipher(int n){
    if (prima(n) && digitPrima(n) && prima(jumlahDigit(n))) {
        return 1; 
    }
    else {
        return 0; 
    }
}

int main(){
    int n;
    scanf("%d", &n);

    if (cipher(n)) {
        printf("1");
    } else {
        printf("0");
    }

    printf("\n");
    return 0;
}