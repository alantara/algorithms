#include <bits/stdc++.h>

int main(){
  int a, b;
  scanf("%d %d", &a, &b);

  for(int i = a - b; i <= a; i++)
    if(a % i == 0){
      printf("%d\n", i);
      break;
    }

  return 0;
}