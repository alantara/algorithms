#include <bits/stdc++.h>
using namespace std;

int a[6][6];
int f[6];

long long bk(int i){
  if(i == 6) return 0;
  long long m = 0;
  for(int j = 0; j < 6; j++){
    if(f[j] == 1) continue;
    f[j] = 1;
    m = max(m, bk(i+1) + a[i][j]);
    f[j] = 0;
  }
  return m;
}

int main(){
  for(int i = 0; i < 6; i++)
    for(int j = 0; j < 6; j++)
      scanf("%d", &a[i][j]);
  printf("%lld\n", bk(0));
  return 0;
}