#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct data
{
    char kota[1001];
    int latitude;
    int longitude;

} uhua;

int check(uhua hang[10001], int a, int z){
   int c = 0;
   int b = 0;
   for (int i = 2; i <= hang[z].latitude / 2; i++){
        if (hang[z].latitude == 0 || hang[z].latitude == 1) c = 1;
        if (hang[z].latitude % i == 0){
            c = 1;
        break;
        }
   }
   for (int i = 2; i <= hang[z].longitude / 2; i++){
    if (hang[z].longitude == 0 || hang[z].longitude == 1) b = 1;
    if (hang[z].longitude % i == 0){
        b = 1;
        break;
    }
   }
   if (c == 1 || b == 1) printf("%s tidak aman! Ini pasti ulah Gorgom!\n", hang[z].kota);
   else printf("%s aman! Bangunlah Kesatria!\n", hang[z].kota);
}
int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    uhua rand[M];
    for (int i = 0; i < M; i++){
        scanf("%s", rand[i].kota);
        scanf("%dN %dE", &rand[i].latitude, &rand[i].longitude);
    }
    char find[1001];
    while (N--){
        scanf("%s", find);
        bool huh = false;
        for (int i = 0; i < M; i++)
        {
            if (strcmp(rand[i].kota, find) == 0)
            {
                huh = true;
                check(rand, M, i);
            }
        }
        if (huh == false) printf("Tempat apa itu? Kotaro tidak tahu!\n");
    }
return 0;
}