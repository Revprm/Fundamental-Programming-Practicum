#include <string.h>
#include <stdio.h>

typedef struct TIC 
{
    char nama[100];
    long long harga;
    long long Stock;
    long long diskonsem;
    long long diskon;
    long long adanya;
}wiii;

wiii isinyaygy[1000000];

void namae(long long idx)
{
    long long i = 0, huhu, c = 0;
    while(1)
    {
        huhu = getchar();
        if (huhu == 10)
        {
            if (c == 1)
                break;
            c++;
        };
        isinyaygy[idx].nama[i] = huhu;
        i++;
    }
}

int main()
{
    char mail[1001];
    long long idx, order, harga, uang_sekarang = 0;
    while(1){
        scanf("%s", mail);
        if (strcmp(mail, "ADD") == 0){
            scanf("%lld", &idx);
            if (isinyaygy[idx].adanya == 1){
                printf("Menu is already exist!\n");
                continue;
            }
            namae(idx);
            
            scanf("%lld", &isinyaygy[idx].harga);
            scanf("%lld", &isinyaygy[idx].Stock);
            
            isinyaygy[idx].diskon = 0;
            isinyaygy[idx].adanya = 1;

            printf("Menu added\n");
            continue;
        }
        else if (strcmp(mail, "REMOVE") == 0)
        {
            scanf("%lld", &idx);
            if (isinyaygy[idx].adanya == 0){
                printf("Menu does not exist\n");
                continue;
            }
            isinyaygy[idx].adanya = 0;
            printf("Menu removed\n");
            continue;
        }
        else if (strcmp(mail, "INFO") == 0){
            scanf("%lld", &idx);
            if (isinyaygy[idx].adanya == 0)
            {
                printf("Menu does not exist\n");
                continue;
            }
            printf("#%lld %s \nPrice : Rp%lld\nStock : %lldx\n\n", idx, isinyaygy[idx].nama, isinyaygy[idx].harga, isinyaygy[idx].Stock);
            continue;
        }
        else if (strcmp(mail, "ORDER") == 0){
            scanf("%lld%lld", &idx, &order);
            if (isinyaygy[idx].adanya == 0){
                printf("Menu does not exist\n");
                continue;
            }
            if (order == 0){
                printf("So you want to order or what\n");
                continue;
            }
            if (isinyaygy[idx].Stock < order)
            {
                printf("Apologize, the stock is not enough\n");
                continue;
            }
            harga = order * isinyaygy[idx].harga - (order * isinyaygy[idx].harga * isinyaygy[idx].diskon / 100);
            uang_sekarang += harga;
            printf("Ordered %lldx %s for Rp%lld\n", order, isinyaygy[idx].nama, harga);
            isinyaygy[idx].Stock -= order;
            continue;
        }
        else if (strcmp(mail, "CLOSE") == 0){ 
            printf("earnings: Rp%lld\n", uang_sekarang);
            printf("Informatics canteen is closing... thanks for the visit!");
            break;
        }
        else if (strcmp(mail, "DISC") == 0){
            scanf("%lld%lld", &idx, &isinyaygy[idx].diskonsem);
            isinyaygy[idx].diskon = isinyaygy[idx].diskon + isinyaygy[idx].diskonsem;
            if (isinyaygy[idx].diskon > 100) isinyaygy[idx].diskon = 100;
            if (isinyaygy[idx].adanya == 0){
                printf("Menu does not exist\n");
                continue;
            }
            else if (isinyaygy[idx].adanya == 1 && isinyaygy[idx].Stock > 0){
                printf("Discount added\n");
                continue;
            }
            continue;
        }
        printf("Unknown command\n");
    }
}
