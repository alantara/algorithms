#include <bits/stdc++.h>

int t;

long long n, k, m;
int cases[]={6, 2, 4, 8};

int main(){
  scanf("%d", &t);

  while(t--){
    scanf("%lld %lld %lld", &n, &m, &k);

    long long a = n;
    if(n >= m){
      a -= ((n-m)/(m-k)+1) * (m-k);
    }
    printf("%d\n", cases[a%4]);
  }
}
