#include <stdio.h>

int main()
{
    long int x1, x2, x3, y1, y2, y3, xc, xy, area; // Penggunaan long int untuk memenuhi syarat interval
    scanf("[%lld,%lld] | [%lld,%lld] | [%lld,%lld]", &x1, &y1, &x2, &y2, &x3, &y3); // Untuk membaca input yang dimasukkan oleh user

    xc = (x1 + x2 + x3) / 3; // Rumus x centroid / titik berat x
    xy = (y1 + y2 + y3) / 3; // Rumus y centroid / titik berat y
    area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)); // Untuk mencari luas dari segitiga

    if (x1 >= 0 && x2 >= 0 && x3 >= 0 && x1 <= 1000000000 && x2 <= 1000000000 && x3 <= 1000000000) // syarat interval yang ditentukan dari soal
    {
        if (((x1 == x2) && (y1 == y2)) || ((x1 == x3) && (y1 == y3)) || ((x2 == x3) && (y2 == y3)))
        {
            printf("Henshin! Entry.");
        }
        else
        {
            if (area == 0) // Kondisi saat 3 titik tidak bisa dibentuk segitiga
            {
                if (xc % 2 != 0 && xy % 2 != 0) // Kondisi jika titik centroid merupakan angka ganjil
                {
                    printf("Boost Raise Buckle Acquired at Coordinate [%lld,%lld]\nHenshin! Boost, Ready, Fight!", xc, xy);
                }
                else
                {
                    printf("Henshin! Entry.");
                }
            }
            else
            {
                if (xc % 2 == 0 && xy % 2 == 0) // Kondisi saat titik centroid merupakan angka genap
                {
                    printf("Magnum Raise Buckle Acquired at Coordinate [%lld,%lld]\nHenshin! Magnum, Ready, Fight!", xc, xy);
                }
                else
                {
                    printf("Henshin! Entry.");
                }
            }
        }
    }

    return 0;
}
