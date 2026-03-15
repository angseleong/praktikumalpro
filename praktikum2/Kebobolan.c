#include <stdio.h>

int panjangPassword(int n){
    return n>= 8;
}

int angka(int password[], int n){
    for (int i = 0; i < n; i++){
        if (password[i] >= '0' && password[i] <= '9'){
            return 1;
        }
    }
    return 0;
}

int hurufBesar(int password[], int n){
    for (int i = 0; i < n; i++){
        if (password[i] >= 'A' && password[i] <= 'Z'){
            return 1;
        }
    }
    return 0;
}

int hurufKecil(int password[], int n){
    for (int i = 0; i < n; i++){
        if (password[i] >= 'a' && password[i] <= 'z'){
            return 1;
        }
    }
    return 0;
}

int passwordKuat(int password[], int n){
    if (panjangPassword(n) && angka(password, n) && hurufBesar(password, n) && hurufKecil(password, n)){
        return 1;
    }
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);

    int password[101];
    char karakter;
    for (int i = 0; i < n; i++){
        scanf(" %c", &karakter);
        password[i] = karakter;
    }

    if (passwordKuat(password, n)){
        printf("KUAT");
    } else {
        printf("LEMAH");
    }

    printf("\n");
    return 0;
}