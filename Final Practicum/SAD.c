#include <stdio.h>
#include <stdbool.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        bool lol = false;
        for (int i = 0; i <= n / 15; ++i)
        {
            if ((n - (15 * i)) % 11 == 0)
            {
                printf("YES");
                lol = true; 
                break;
            }
        }
        if (lol == false) printf("NO");
        printf("\n");
    }
}