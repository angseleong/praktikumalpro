#include <stdio.h>

int main()
{
    int HH1, MM1, SS1, HH2, MM2, SS2, selisihHH, selisihMM, selisihSS;
    scanf("%d %d %d", &HH1, &MM1, &SS1);
    scanf("%d %d %d", &HH2, &MM2, &SS2);

    selisihHH = HH2 - HH1;
    selisihMM = MM2 - MM1;
    selisihSS = SS2 - SS1;

    printf("%d %d %d", selisihHH, selisihMM, selisihSS);

    printf("\n");
    return 0;
}