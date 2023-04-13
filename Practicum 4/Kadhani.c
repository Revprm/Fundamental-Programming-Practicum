#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Kadhani
{
    char alamat[1000];
    char Ip[100];
};

int main()
{
    long long M, N;
    scanf("%lld %lld", &M, &N);
    struct Kadhani alm[M];
    for (int i = 0; i < M; i++)
    {
        scanf("%s", alm[i].alamat);
        scanf("%s", alm[i].Ip);
    }
    char str[100];
    while (N--)
    {
        scanf("%s", str);
        bool hauh = false;
        for (int j = 0; j < M; j++) 
        {
            if (strcmp(alm[j].alamat, str) == 0)
            {
                printf("%s Berhasil Di Blokir.\n", alm[j].Ip);
                hauh = true;
            }
        }
        if (hauh == false) printf("Alamat Tidak Ditemukan...\n");
    }

    return 0;
}