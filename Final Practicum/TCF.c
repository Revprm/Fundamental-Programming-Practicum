#include <stdio.h>
#include <string.h>

typedef struct TCF
{
    char agentname[1001], agentbf[1001], agentnum[1001], numbf[1001];
    int agentag, bfage;
}window;

int main(){
    int N, M;
    scanf("%d", &M);
    window zeta[101];
	int i = 0, j = 0, k = 0, ves[101];
	char machi [1001][1001];
    while (i != M){
        scanf("%s %d", machi[i], &N);
        while (j != N){
            scanf("%s %d %s", zeta[k].agentname, &zeta[k].agentag, zeta[k].agentnum);
            j++;
			k++;
        }
        ves[i] = k;
		j=0;
		i++;
    }
	i = 0;
    while (i != k){
        zeta[i].agentbf[0] = '\0';
		i++;
    }
	int wua;
    scanf("%d", &wua);
	char name1[101], name2[101];
	i = 0, j = 0;
	int z = 0;
	while (i != wua){
		scanf("%s %s", name1, name2);
		while(j!=k){
			if(strcmp(name1, zeta[j].agentname) == 0){
				while(z != k){
					if(strcmp(name2, zeta[z].agentname) == 0){
						strcpy(zeta[j].agentbf, zeta[z].agentname);
						zeta[j].bfage = zeta[z].agentag;
						strcpy(zeta[j].numbf, zeta[z].agentnum);
						break;
					}
					z++;
				}
				break;
			}
			j++;
		}
		z=0;
		j=0;
		i++;
	}
	i = 0, j = 0;
	while(i != M){
		printf("%s\n", machi[i]);
		while(j != ves[i]){
			printf("Name: %s\n", zeta[j].agentname);
			printf("Age: %d\n", zeta[j].agentag);
			printf("Phone Number:%s\n", zeta[j].agentnum);
            
            if(strlen(zeta[j].agentbf) != 0){
				printf("His/Her bestie is: %s\n", zeta[j].agentbf);
				printf("His/Her contact info is as follows\n");
				printf("Name: %s\n", zeta[j].agentbf);
				printf("Age: %d\n", zeta[j].bfage);
				printf("Phone Number:%s\n", zeta[j].numbf);
			}

            else{
				printf("His/Her bestie is: No one\n");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}