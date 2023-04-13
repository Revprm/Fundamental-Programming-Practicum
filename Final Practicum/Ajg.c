#include <stdio.h>
#include <stdbool.h>

int main(){
    int Q, N;
    scanf("%d", &Q);
    if (Q >= 1 && Q <= 1000)
    {
    for (int i = 0; i < Q; i++)
    {
        scanf("%d", &N);
        if (N >= 1 && N <= 100000)
        {
            int Num[N];
            bool prime = false;
            for (int i = 0; i < N; i++){
                scanf("%d", &Num[i]);
                int C = 0;
                for (int j = 2; j <= Num[i] / 2; j++){
                    if (Num[i] % j == 0){
                        C = 1;
                        prime = false;
                    }
                }
                if (C == 0 && Num[i] != 1){
                    printf("%d ", Num[i]);
                    prime = true;
                } 
            }
        if (prime == false) printf("Unable to send Fever Slot Buckle.\n");
        }
        printf("\n");
        }   
    }         
    return 0;
}
