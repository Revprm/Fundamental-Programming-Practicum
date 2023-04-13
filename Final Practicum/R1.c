#include <stdio.h>
#include <string.h>

int maxnum(int a[], long int uk){
    long int l = -2147483647, h = 0;
    for (long int i = 0; i < uk; i++){
        h = h + a[i];
        if (l < h)
            l = h;

        if (h < 0)
            h = 0;
    }
    return l;
}
int main(){
    int N;
    scanf("%d", &N);
    char name[N][101];
    long int temp[N];
    for (int i = 0; i < N; i++)
    {
        long int M;
        scanf("%s %lld", name[i], &M);
        int a[M];
        for (int j = 0; j < M; j++){
            scanf("%d", &a[j]);
        }
        long int temp1 = maxnum(a, M);
        temp[i] = temp1;
    }
    long int res = 0; 
    long int idx = 0;
    for (int i = 0; i < N; i++){
        if (res < temp[i]){
            res = temp[i];
            idx = i;
        }
    }
    printf("%s\n", name[idx]);
    return 0;
}