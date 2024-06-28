#include <bits/stdc++.h>

char a[100];

int main(){
  int n;
  scanf("%d", &n);
  while(n--){
    int c;
    scanf("%s %d", a, &c);
    for(int i = 0; a[i] != '\0'; i++){
      a[i] = (a[i]-'A'-c+26) % 26 + 'A';
    }
    printf("%s\n", a);
  }
  return 0;
}