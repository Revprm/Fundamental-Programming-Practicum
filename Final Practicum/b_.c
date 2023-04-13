#include <stdio.h>
#include <string.h>

int countpal(char Str[100001]){
    int pj = strlen(Str);
    int res = 0;
    int l, r;
    for (int i = 0; i < pj; i++){
        l = r = i;
        while (l >= 0 && r < pj && Str[l] == Str[r]){
            res++;
            l--;
            r++;
        }
        l = i;  
        r = i + 1;
        while (l >= 0 && r < pj && Str[l] == Str[r]){
            res++;
            l--;
            r++;
        }
    }
    return res;
}

int main(){
    char str[100001];
    scanf("%s", str);
    printf("%d", countpal(str));
    return 0;
}