#include <stdio.h>
#include <string.h>

struct Deck
{
    char Name[1001];
    int power;
};
void Swap(struct Deck Swap[1001], int huh, int hah)
{
    struct Deck temp;
    temp = Swap[huh];
    Swap[huh] = Swap[hah];
    Swap[hah] = temp;
    return;
}
int main()
{
    int N;
    scanf("%d", &N);
    struct Deck Dek1[N];
    for (int i = 0; i < N; i++)
    {
        scanf("\n%[^\n]", Dek1[i].Name);
        scanf("%d", &Dek1[i].power);
    }
    char mail[100];
    int a, b;
    while (scanf("%s", mail) != EOF)
    {
        if (strcmp(mail, "SWAP") == 0)
        {
            scanf("%d %d", &a, &b);
            if (a < 0 || a > (N - 1) || b < 0 || b > (N - 1))
                printf("[Out of Bounds]\n");
            else
            {
                if ((a != b)) Swap(Dek1, a, b);
                else if (a == b) printf("[Swap on Same Card]\n");
            }
        }
        if (strcmp(mail, "SHOW") == 0)
        {
            for (int h = 0; h < N; h++)
            {
                printf("%s %d\n", Dek1[h].Name, Dek1[h].power);
            }
        }
        if (strcmp(mail, "END") == 0) return 0;
    }
}
