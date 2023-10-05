#include <stdio.h>

int main()
{

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
