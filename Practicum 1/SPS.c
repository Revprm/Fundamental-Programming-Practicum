#include <stdio.h>

int main()
{
    long int M;             // Penggunaan long int untuk memenuhi syarat interval dari soal
    int N;                  // sebagai variabel untuk maksimal kelereng yang dapat diambil tiap giliran
    scanf("%d %d", &M, &N); // untuk menerima input dari user

    if ((M >= 1 && M <= 1000000000) && N >= 2 && N <= 100000) // kondisi if untuk memenuhi syarat interval yang diberikan oleh soal
    {
        if (M % (N + 1) == 0) // Dalam kondisi ini, alasan menggunakan kondisi N+1 dikarenakan
                              // bahresi akan selalu menang apabila sisa kelereng
                              // saat pengambilan dibagi dengan N+1 tidak sama dengan 0
                              // maka muncullah rumus M % (N+1) == 0
                              // dari rumus itu jika bernilai 0 maka pemenangnya abeng, jika != 0 maka pemenangnya bahresi
        {
            printf("abeng");
        }
        else
        {
            printf("bahresi");
        }
    }

    return 0;
}
