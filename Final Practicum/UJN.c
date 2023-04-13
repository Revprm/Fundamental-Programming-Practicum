#include <stdio.h>
#include <string.h>
int main(){
    int N;
    long int saldo;
    long int krg;
    long int poin = 0;
    char huhah[100];
    scanf("%lld", &saldo);
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%s %lld", huhah, &krg);
        if (strcmp(huhah, "Iya") == 0)
        {
            if (krg <= 100000) poin = poin + 1;           
            if (krg > 100000 && krg <= 500000) poin = poin + 5;
            if (krg > 500000 && krg <= 10000000) poin = poin + 20;
            if (krg > 10000000 && krg <= 500000000) poin = poin + 35;
            if (krg > 500000000) poin = poin + 50;
            
        }
        if (strcmp(huhah, "Tidak") == 0)
        {
            if (krg <= 100000) poin = poin - 1;           
            if (krg > 100000 && krg <= 500000) poin = poin - 5;
            if (krg > 500000 && krg <= 10000000) poin = poin - 20;
            if (krg > 10000000 && krg <= 500000000) poin = poin - 35;
            if (krg > 500000000) poin = poin - 50;
        }
        saldo-=krg;
    }
    if (poin > 0) printf("Ujana berakhir bahagia.");
    else if (poin == 0) printf("Ujana berakhir b aja.");
    else if (poin < 0) printf("Ujana tidak berakhir bahagia.");
    else if (saldo < 0) printf("Ujana tidak berakhir bahagia.");
    

    return 0;
}