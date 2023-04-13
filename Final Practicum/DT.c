#include <stdio.h>

int main(){
    int N;
    int u = 0;
    while (scanf("%d", &N) != EOF){
        int arr[N];
        int temp;
        if (N > 0)
        {   
            for (int i = 0; i < N; i++)
            {
                scanf("%d", &arr[i]);
            }        
            for (int i = 0; i < N - 1; i++)
            {
                for (int j = 0; j < N - 1 - i; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    u++;
                    }
                }
            }
            printf("Minimal lakukan %d pertukaran\n", u);
            for (int i = 0; i < N; i++)
            {
                
                if (arr[i] % 2 == 0 && arr[i] % 5 == 0 && arr[i] % 10 == 0) printf("Yeay Lulus Dasprog\n");
                else if (arr[i] % 2 == 0 && arr[i] % 5 == 0) printf("Yeay Lulus\n");
                else if (arr[i] % 5 == 0 && arr[i] % 10 == 0) printf("Lulus Dasprog\n");
                else if (arr[i] % 2 == 0 && arr[i] % 10 == 0) printf("Yeay Dasprog\n");
                else if (arr[i] % 2 == 0) printf("Yeay\n");
                else if (arr[i] % 5 == 0) printf("Lulus\n");
                else if (arr[i] % 10 == 0) printf("Dasprog\n");
                else if (arr[i] % 2 != 0) printf("%d\n", arr[i]); 
                else if (arr[i] % 5 != 0) printf("%d\n", arr[i]); 
                else if (arr[i] % 10 != 0) printf("%d\n", arr[i]); 
            }    
            u = 0;
        }
        else if (N == 0) return 0;
    }
    
    
    return 0;
}