#include <bits/stdc++.h>

int n;
int a, b, c, d;

int main(){
  scanf("%d", &n);

  while(n--){
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(a < b){
      std::swap(a, b);
    }
    
    int s = 0;

    for(int i = b; i < a; i++){
      if(i == c || i == d)
        s++;
    }

    if(s == 1){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
}
