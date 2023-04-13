#include <stdio.h>
#include <string.h>

char st[32];

int Bakaqua(long long huh, int idx){
   char bin; 
	if (huh == 0) return 0;
	else bin = 48 + (huh % 2);
	huh /= 2;
	Bakaqua(huh,idx + 1); 
	st[idx] = bin;
}

void berubah(long long x, long long y){
   long long idx = 0, arr[x];
   while (x--){
      long long b, chg;
      for (long long i = 0; i < 32; i++) st[i] = '0';
      scanf("%lld %lld", &chg, &b);
      --chg;
      if (chg >= 0) y = y ^ 1 << chg;
      Bakaqua(y ^ b, 0);
      long long total = 0;
      long long pj = strlen(st);
      char sem = '0';
      for (long long i = 0; i < pj; i++){
         if (st[i] == '1' && st[i] != sem) total++;
         sem = st[i];
      }
      y = b;
      arr[idx] = total;
      idx++;
   }
   for (int i = 0; i < idx; i++) printf("%lld\n", arr[i]);
}

int main(){
   long long N, a;
   scanf("%lld %lld", &N, &a);
   berubah(N, a);
	return 0;
}
