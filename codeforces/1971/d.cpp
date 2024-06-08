#include <bits/stdc++.h>

int n;
char s[501];

int main(){
  scanf("%d", &n);

  while(n--){
    scanf("%s", s);

    int sum = 0, j=0;

    for(int i = 1; s[i] != '\0'; i++){
      if(s[i-1] != s[i]){
        if(j==0 && s[i-1] == '0'){
          j++;
        }else{
          sum++;
        }
      }
    }

    printf("%d\n", sum+1);
  }
}
