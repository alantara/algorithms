#include <bits/stdc++.h>
using namespace std;

int v[212345];

int main(){
  int n, t;
  long long k;

  scanf("%d", &t);

  while(t--){
    scanf("%d %lld", &n, &k);
    for(int i = 1; i < 212345; i++){
      v[i] = i;
    }

    if(k & 1) {printf("NO\n"); continue;}

    int l = 1, r = n;
    while(k != 0){
      long long cur = (r-l) * 2;
      if(cur <= k){
        swap(v[l], v[r]);
        l++;r--;
        k-=cur;
      }
      else{
        r--;
      }
      if(r<=l){
        break;
      }
    }
    if(k == 0){
      printf("YES\n");
      for(int i = 1; i <= n; i++){
        printf("%s%d", (i > 0)? " " : "", v[i]);
      }
      printf("\n");
    }else{
      printf("NO\n");
    }
  }

  return 0;
}