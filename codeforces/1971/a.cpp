#include <bits/stdc++.h>

int n;
int a, b;

int main(){
  scanf("%d", &n);
  while(n--){
    scanf("%d %d", &a, &b);
    (a < b) ? printf("%d %d\n", a, b): printf("%d %d\n", b, a);
  }
}
