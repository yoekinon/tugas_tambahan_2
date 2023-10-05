#include <stdio.h>
#include <stdlib.h>

int main()
{

    int C = 0;
    int i, j, sum = 0;
    printf("TUGAS NO 4\n");
    float R, F;
    printf("C\tR\tF\n");
    while (C <= 180)
    {
        R = C * 4 / 5;
        F = C * 9 / 5 + 32;
        printf("%d\t%.0f\t%.0f\t\n", C, R, F);
        C += 30;
    }

    printf("TUGAS NO 5\n");
    printf("Masukkan bilangan terkecil: ");
    scanf("%d", &i);
    printf("Masukkan bilangan terbesar: ");
    scanf("%d", &j);

    for (int k = i; k < j; k++)
    {
        if (k % 2 == 0)
        {
            sum += k;
        }
    }
    printf("Hasil ");
    for (int k = i; k < j; k++)
    {
        if (k % 2 == 0)
        {
            printf("%d + ", k);
        }
    }

    printf("adalah %d ", sum);

    return 0;
}