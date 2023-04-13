#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct MB{
    char nama[50];
    long long doko;
}aqua;

typedef struct MB1{
    char nama[50];
    aqua *huas;
}damn;

int main(){
    long long N;
    scanf("%lld", &N);
    damn minato[1001];
    aqua bazo[1001];
    int x = 0, y = 0;
    while (N--){
        char mail[101];
        char temp[101];
        scanf("%s %s", mail, temp);
        if (mail[0] == 's'){
            if (temp[0] == '*'){
                scanf("%s %s", minato[x].nama, temp);
                char namasem[50];
                scanf("%s", namasem);
                for (long long i = 0; i < y; i++){
                    if (strcmp(bazo[i].nama, namasem) == 0) minato[x].huas = &bazo[i];
                }
                x++;
            }
            else{
                strcpy(bazo[y].nama, temp);
                scanf("%lld", &bazo[y].doko);
                y++;
            }
        }
        else if (mail[0] == 'c'){
            if (temp[0] == '*'){
                char namasem[50], desho[50];
                scanf("%s %s", namasem, temp);
                if (temp[0] == '&'){
                    scanf("%s", desho);
                    for (long long i = 0; i < x; i++){
                        if (strcmp(namasem, minato[i].nama) == 0){
                            for (long long j = 0; j < y; j++){
                                if (strcmp(desho, bazo[j].nama) == 0){
                                    minato[i].huas = &bazo[j];
                                    break;
                                }
                            }
                            break;
                        }
                    }
                }
                else{
                    for (long long i = 0; i < x; i++){
                        if (strcmp(namasem, minato[i].nama) == 0){
                            (*minato[i].huas).doko = atoi(temp);
                            break;
                        }
                    }
                }
            }
            else{
                for (long long i = 0; i < y; i++){
                    if (strcmp(temp, bazo[i].nama) == 0){
                        scanf("%lld", &bazo[i].doko);
                        break;
                    }
                }
            }
        }
        else{
            char lok[50];
            scanf("%s", lok);
            for (long long i = 0; i < x; i++){
                if (strcmp(minato[i].nama, lok) == 0) printf("%lld\n", (*minato[i].huas).doko);  
            }
        }
    }
    return 0;
}