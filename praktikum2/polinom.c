#include <stdio.h>

//f(x) = x^2 + 5x + 7
//g(x) = x^4 + 2x + 1
//komposisi f(g(x)) = f(g(x)) = (g(x))^2 + 5(g(x)) + 7

int f(int x){
    return x * x + 5 * x + 7;
}

int g(int x){
    return x * x * x * x + 2 * x + 1;
}

int komposisiFungsi(int x){
    return f(g(x));
}

int main(){
    int x;
    scanf("%d", &x);
    int hasil = komposisiFungsi(x);
    printf("%d", hasil);

    printf("\n");
    return 0;
}