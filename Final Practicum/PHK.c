#include <stdio.h>
void RorN(int *ub, int Vz, int *prs);
void HYG(int x, int y, int uk){
    if(x < 0) x = 0;
    if(y < 0) y = 0;
    if(x > uk) x = uk;
    if(y > uk) y = uk;
    printf("LIHAT %d %d\n", x, y);
    fflush(stdout);
}
int main(){
    int uk, x, y, ans, mod;
    int temp = 0;
    scanf("%d", &uk);
    y = x = uk / 2;
    mod = uk / 4;
    printf("LIHAT %d %d\n", x, y);
    fflush(stdout);
    scanf("%d", &ans);
    while(ans != 5){
        switch(ans){
            case 1:
                x-=mod;
                y+=mod;
                RorN(&mod, ans, &temp);
                HYG(x,y,uk);
                break;
            case 2:
                y+=mod;
                RorN(&mod, ans, &temp);
                HYG(x,y,uk);
                break;
            case 3:
                x+=mod;
                y+=mod;
                RorN(&mod, ans, &temp);
                HYG(x,y,uk);
                break;
            case 4:
                x-=mod;
                RorN(&mod, ans, &temp);
                HYG(x,y,uk);
                break;
            case 6:
                x+=mod;
                RorN(&mod, ans, &temp);
                HYG(x,y,uk);
                break;
            case 7:
                x-=mod;
                y-=mod;
                RorN(&mod, ans, &temp);
                HYG(x,y,uk);
                break;
            case 8:
                y-=mod;
                RorN(&mod, ans, &temp);
                HYG(x,y,uk);
                break;
            case 9:
                x+=mod;
                y-=mod;
                RorN(&mod, ans, &temp);
                HYG(x,y,uk);
                break;
        }
        scanf("%d", &ans);
    }
    printf("KOORDINAT %d %d\n", x, y);
    return 0;
}
void RorN(int *ub, int Vz, int *prs){
    if(prs == 0 && Vz == *prs){
        *ub = *ub / 2;
        *prs = Vz;
    }
    else if(Vz == *prs){
        *ub = *ub * 4 / 5;
        *prs = Vz;
    }
    else if(Vz != *prs){
        *ub = *ub / 2;
        *prs = Vz;
    }
    if(*ub < 1) *ub = 1;
}