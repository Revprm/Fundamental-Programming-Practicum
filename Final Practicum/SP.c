#include <stdio.h>

int main(){
    int N, num;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &num);
        if (num % 2 == 0) printf("%d\n", ((2*num)-1));
        else printf("%d\n", ((2*num)+1));
    }
    return 0;
}