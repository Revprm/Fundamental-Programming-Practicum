#include <stdio.h>
#include <string.h>

typedef struct something{
    char vname[50], ptrname[50], adr[50];
    int valo, indec;
} smt;

int searchd(smt *cek, int q, char *comp, int swap){
    for (int i = 0; i < q; i++){
        if (strcmp(comp, cek[i].ptrname) == 0)return searchd(cek, q, cek[i].adr, swap);
        else if (strcmp(comp, cek[i].vname) == 0 && swap == 0) return cek[i].valo;
        else if (strcmp(comp, cek[i].vname) == 0){
            cek[i].valo = swap;
            return cek[i].valo;
        }
    }
        return -1;
}
int main()
{
    int N;
    char suitch[100]; 
    scanf("%d", &N);
    smt lol[N];
    for (int i = 0; i < N; i++){ 
        scanf("%s", suitch);
        char temp[50];
        int swap = 0;
        if (strcmp(suitch, "init") == 0){ 
            scanf("%s", temp);
            if (strcmp(temp, "*") == 0){
                char moment[50];
                scanf("%s &", moment); 
                strcpy(lol[i].ptrname, moment);
                scanf("%s", lol[i].adr);
            }
            else{
                strcpy(lol[i].vname, temp);
                scanf("%d", &lol[i].valo);
            }
        }
        else if (strcmp(suitch, "modify") == 0){ 
            scanf("%s", temp);
            if (strcmp(temp, "*") == 0){ 
                char sem[50];
                scanf("%s", sem);
                for (int i = 0; i < N; i++){
                    if (strcmp(sem, lol[i].ptrname) == 0){    
                        for (int e = 0; e < i; e++){
                            if (strcmp(lol[i].adr, lol[e].vname) == 0){
                                scanf("%d", &lol[e].valo);
                            }
                        }
                    }
                }
                
            }
            else{ 
                
                for (int i = 0; i < N; i++){
                    if (strcmp(temp, lol[i].ptrname) == 0){
                        scanf(" &");
                        scanf("%s", lol[i].adr);
                    }
                    else if (strcmp(temp, lol[i].vname) == 0){
                        scanf("%d", &lol[i].valo);
                    }
                }
            }
        }

        else if (strcmp(suitch, "print") == 0){ 
            scanf("%s", temp);
            printf("%d\n", searchd(lol, N, temp, swap));
        }
    }
}