#include <stdio.h>
#include <math.h>

unsigned long long modul(unsigned long long A, unsigned long long B, unsigned long long C, unsigned long long D){
    unsigned long long res = 1;
    if (C > 1) A = modul(A, B, C-1, D);
    while (B)   
    {
        if (B & 1) res = (A * res) % D;
        A = (A * A)%D;
        B >>= 1;
    }
    return res;
    
}


int main(){
    int X, Y, Z, N, res;
    scanf("%d %d %d %d", &X, &Y, &Z, &N);
    if (X == 0) printf("0");
    else  if (X == 1 || Y == 0) printf("1");
    else if (Y == 1 || Z == 0) printf("%d", X % N + 1);
    else printf("%llu", modul(X, Y, Z, N) + 1);
    return 0;
}