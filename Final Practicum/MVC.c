#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void urutinajah(char arr[], int n) {
   bool Jamal = false;        
   for (int i = 0; i < n-1; i++) {
      Jamal = false;
      for (int j = 0; j < n-i-1; j++) {
         if (arr[j] < arr[j+1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            Jamal = true;
         }
      }
      if (Jamal == false) break;
   }
}
int main(){
    char num[10001];
    int N;
    scanf("%s", num);
    scanf("%d", &N);
    int pj = strlen(num);
    char res[N], temp[N];
    for (int i = 0; i < N; i++){
        temp[i] = '0';
        res[i] = '0';
    }
    for (int i = 0; i < pj - N + 1 ; i++){
        int huhah = i;
        for (int j = 0; j < N; j++){
            temp[j] = num[j + huhah];
        }
        urutinajah(temp, N); 
        if (strcmp(temp, res) > 0) strcpy(res, temp);
        
    }

    for (int i = 0; i < N; i++){
        printf("%c", res[i]);
    }   
}
