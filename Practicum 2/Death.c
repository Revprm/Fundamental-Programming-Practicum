#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[50];
    int N;
    long long Skor = 0; 
    scanf("%d", &N);
        for (int i = 0; i < N; i++){
        // while (token != NULL){
            // printf("%s ", token);
            scanf("%s", &str);
            
            char *token = strtok(str, ".");
            char *name = strtok(NULL, ".");
            char *status = strtok(NULL, ".");
            char *Health = strtok(NULL, ".");
            
            int a = atoi(status);
            int b = atoi(Health);

            if (a % 5 == 0) {
                printf("%s %d\n", name, b);
                Skor += b;
            }
        }
    printf("TOTAL SCORE: %lld", Skor);
    return 0;
}
