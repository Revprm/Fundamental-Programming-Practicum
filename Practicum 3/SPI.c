#include <stdio.h>

int josephus(int n, int k)
{
    int res = 0;
    for (int i = 1; i <= n; i++)
        res = (res + k) % i;
    return res + 1;
}
int main()
{
    int Q, N;
    scanf("%d", &Q);
    if (Q >= 1 && Q <= 100000)
    {
        for (int i = 0; i < Q; i++)
        {          
            scanf("%d", &N);
            if (N >= 1 && N <= 10000) printf("%d\n", josephus(N, N+1));
        }
    }
    return 0;
}           
