#include <bits/stdc++.h>

#define MAX 212345

int t, n, i;
int a[MAX], b[MAX], c[MAX], d[MAX];

int main(){
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    for(i = 0; i < n; i++){
      scanf("%d", a[i]);
      if(i > 1)
        b[i-1] = euclides(a[i], a[i-1]);
      if(i > 2)
        c[i-2] = euclides(a[i], a[i-2]);
    }

    int l, r, yes;
    for(i = 1; i < n-1; i++){
      if(b[i-1] < b[i]){
        l = i-2;
        r = i+1;
        if(c[i-1] > b[l] && c[i-1] < b[r]){
          
        }
      }
    }
  }
  return 0;
}