#include <stdio.h>
#include <string.h>

int main()
{
    printf("Soal pertama\n");
    char input[50], retry;
    int m = 0, h = 0, k = 0;
    do
    {
        printf("Masukkan warna buah (merah, hijau, kuning) : ");
        scanf("%s", input);

        if (strcmp(input, "merah") == 0)
        {
            m++;
        }
        else if (strcmp(input, "kuning") == 0)
        {
            k++;
        }
        else if (strcmp(input, "hijau") == 0)
        {
            h++;
        }
        
        printf("Apakah Anda ingin memasukkan lagi (y/t): ");
        scanf(" %c", &retry);

    } while (retry == 'y' || retry == 'Y');

    printf("Jumlah buah merah: %d\n", m);
    printf("Jumlah buah hijau: %d\n", h);
    printf("Jumlah buah kuning: %d\n", k);
    printf("\n");
    printf("Soal ke 2\n");

    int panjang, i = 0;
    printf("masukkan angka: ");
    scanf("%d", &panjang);
    while (i < panjang)
    {
        if (i == 5 || i == 6 || i == 13 || i == 17)
        {
            i++;
            continue;
        }
        else
        {
            printf("%d ", i);
            i++;
        }
    }
    return 0;
}
