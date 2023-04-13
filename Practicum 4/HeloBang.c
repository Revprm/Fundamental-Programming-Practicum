#include <stdio.h>
#include <string.h>
struct data
{
    char str[100];
    char ID[100];
    int win, draw, lose, skor;
};
int sort(struct data huhah[1001], int y);

int hitung(int a, int b, int c, int *score)
{

    int A = a * 30;
    int B = b * 10;
    int C = c * -20;
    *score = A + B + C;
}

int main()
{
    int N;
    scanf("%d", &N);
    struct data arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%s", arr[i].ID);
        scanf("%s", arr[i].str);
        scanf("%d %d %d", &arr[i].win, &arr[i].draw, &arr[i].lose);
    }
    for (int j = 0; j < N; j++)
    {
        arr[j].skor = 0;
        hitung(arr[j].win, arr[j].draw, arr[j].lose, &arr[j].skor);
    }
    sort(arr, N);
    for (int k = 0; k < N; k++)
    {
        printf("%s %s %d %d %d %d\n", arr[k].ID, arr[k].str, arr[k].win, arr[k].draw, arr[k].lose, arr[k].skor);
    }
    return 0;
}
int sort(struct data huhah[1001], int y)
{
    int i, j;
    struct data temp;
    for (i = 0; i < y - 1; i++)
    {
        for (j = 0; j < (y - 1 - i); j++)
        {
            if (huhah[j].skor < huhah[j + 1].skor)
            {
                temp = huhah[j];
                huhah[j] = huhah[j + 1];
                huhah[j + 1] = temp;
            }
            if (huhah[j].skor == huhah[j + 1].skor)
            {
                if (strcmp(huhah[j].str, huhah[j + 1].str) > 0)
                {
                    temp = huhah[j];
                    huhah[j] = huhah[j + 1];
                    huhah[j + 1] = temp;
                }
            }
        }
    }
}