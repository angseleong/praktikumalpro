// #include <stdio.h>

// typedef struct{
//         int HH;
//         int MM;
//         int SS;
//     }
// jam;

// int main()
// {
//     int h, m, s;
//     jam j;

//     scanf("%d %d %d", &h, &m, &s);
    
//     if (0<=h && h<=23 && 0<=m && m<=59 && 0<=s && s<=59){
//         j.HH = h;
//         j.MM = m;
//         j.SS = s;
//         printf("%02d:%02d:%02d", j.HH, j.MM, j.SS);
//     }
//     else{
//         printf("tidak dapat membentuk jam");
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int r1, r2, r3, jenis;
//     float rt;

//     printf("masukan resistor 1: ");
//     scanf("%d", &r1);
//     printf("masukan resistor 2: ");
//     scanf("%d", &r2);
//     printf("masukan resistor 3: "); 
//     scanf("%d", &r3);

//     printf("tentukan jenis rangkaian (seri = 1, paralel = 2): ");
//     scanf("%d", &jenis);

//     if (r1 <= 0 || r2 <= 0 || r3 <= 0) {
//         printf("resistor harus bernilai positif");
//     }
//     else if (jenis != 1 && jenis != 2) {
//         printf("jenis rangkaian tidak valid");
//     }
//     else {
//         if (jenis == 1) {
//             rt = r1 + r2 + r3;
//             printf("resistansi total (seri): %.2f", rt);
//         }
//         else if (jenis == 2) {
//             rt = 1.0 / ((1.0 / r1) + (1.0 / r2) + (1.0 / r3));
//             printf("resistansi total (paralel): %.2f", rt);
//         }
//     }

//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// typedef struct{
//     int pembilang;
//     int penyebut;
// } pecahan;

// int main()
// {
//     pecahan p1, p2, selisih;

//     printf("masukan pembilang pecahan 1: ");
//     scanf("%d", &p1.pembilang);
//     printf("masukan penyebut pecahan 1: ");
//     scanf("%d", &p1.penyebut);
//     printf("masukan pembilang pecahan 2: ");
//     scanf("%d", &p2.pembilang);
//     printf("masukan penyebut pecahan 2: ");
//     scanf("%d", &p2.penyebut);

//     if (p1.penyebut <= 0 || p2.penyebut <= 0) {
//         printf("penyebut tidak valid");
//     }
//     else {
//         int nilai1 = p1.pembilang * p2.penyebut;
//         int nilai2 = p2.pembilang * p1.penyebut;
//         int penyebut = p1.penyebut * p2.penyebut;

//         if (nilai1 >= nilai2) {
//             selisih.pembilang = nilai1 - nilai2;
//         }
//         else {
//             selisih.pembilang = nilai2 - nilai1;
//         }
//         selisih.penyebut = penyebut;
//         printf("selisih pecahan: %d/%d", selisih.pembilang, selisih.penyebut);
//     }
        

//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     // int array[10];

//     // for (int i = 0; i < 10; i++) {
//     //     array[i] = i + 1;
//     // }

//     // printf("Elemen pertama (indeks 0): %d\n", array[0]);
//     // printf("Elemen terakhir (indeks 9): %d\n", array[9]);
//     // printf("\n");
//     // return 0;

//     int n;
//     // Meminta masukan dari pengguna
//     printf("Masukkan nilai n: ");
//     scanf("%d", &n);

//     // Proses mencetak "Hello" sebanyak n kali
//     for (int i = 0; i < n; i++) {
//         printf("Hello\n"); // Tambahan (i+1) agar terlihat urutan angkanya
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main (){
//     int N;
//     scanf("%d", &N);
//     for (int i = 1; i <= N; i++){
//         for (int j = 1; j <= N; j++){
//             if (i == 1 || i == N){
//                 if (j == (N+1)/2){
//                     printf("*");
//                 } else {
//                     printf(".");
//                 }
//             }
//             else if (i == (N+1)/2){
//                 if (j == 1 || j == N){
//                     printf("*");
//                 } else {
//                     printf(".");
//                 }
//             } else {
//                 if (j == i || j == (N+1-i)){
//                     printf("*");
//                 } else {
//                     printf(".");
//                 }
//             }
//         } printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main (){
//     char string[10000];
//     scanf("%s", string);
//     int len = strlen(string);
//     int i = 0;
//     int j = len-1;
//     while (j>-1 && string[i] == string[j]){
//         j-=1;
//         i+=1;
//     }
//     if (j == -1){
//         printf("1\n");
//     } else {
//         printf("0\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int luasawal, tahun, luasakhir, tahunawal;

//     scanf("%d %d", &luasawal, &tahun);

    
//     for (tahunawal = 0; tahunawal < tahun; tahunawal++) {
//         luasakhir = luasawal + 9;
//         luasawal = luasakhir;
//         printf("tahun ke-%d = %d\n", tahunawal + 1, luasakhir);
//     }

//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int N, X;
//     int pisang = 0;
//     int jelly = 0;

//     scanf("%d", &N);

//     for (int i = 0; i < N; i++) {
//         scanf("%d", &X);
        
//         if (X == 0)
//         {
//             break;
//         }
//         if (X % 2 == 0) {
//             pisang += X;
//         } else {
//             jelly += X;
//         }
//     }

//     printf("%d %d", pisang, jelly);
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     long kode;
//     scanf("%ld", &kode);

//     while(kode > 9)
//     {
//         long sum = 0;
//         while (kode > 0) {
//             sum += kode % 10;
//             kode /= 10;
//         }

//         kode = sum;
//     }

//     printf("%ld", kode);
//     printf("\n");
//     return 0;
// }

#include <stdio.h>

int main() {
    long N;
    long total_nol = 0;

    // Meminta input N
    scanf("%ld", &N);

    // Menghitung jumlah faktor 5 di dalam faktorial N!
    while (N >= 5) {
        total_nol += N / 5;
        N /= 5;
    }

    // Mencetak hasil akhir
    printf("%ld\n", total_nol);

    return 0;
}