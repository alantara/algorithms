#include <bits/stdc++.h>

#define MAX 112345
int t, n, k, q, d;
int av[MAX], bv[MAX];

int binS(int l, int r, int d){
  if(l==r){
    return l;
  }

  int mid = (l+r)/2;
  if(d==av[mid]){
    return mid;
  }
  if(d > av[mid]){
    return binS(mid+1, r, d);
  }
  return binS(l, mid-1, d);
}

int main(){
  av[0]=bv[0]=0;
  scanf("%d", &t);
  while(t--){
    scanf("%d %d %d", &n, &k, &q);
    for(int i = 0; i < k; i++){
      scanf("%d", &av[i+1]);
    }
    for(int i = 0; i < k; i++){
      scanf("%d", &bv[i+1]);
    }
    for(int i = 0; i < q; i++){
      scanf("%d", &d);

      int j = binS(0, k, d);
      double vel = (float)(av[j+1]-av[j])/(bv[j+1]-bv[j]);
      double innTime = (d-av[j])/vel;
      printf("%f %d", vel, bv[j]+(int)innTime);
    }
    printf("\n");
  }
}
