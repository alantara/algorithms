#include <bits/stdc++.h>

int n;
char s[11];
int c;

int main(){
  scanf("%d", &n);

  while(n--){
    scanf("%s", s);
    c=0;
    for(int i = 1; s[i]!='\0'; i++){
      if(s[i-1] != s[i]){
        char a;
        a=s[i-1];
        s[i-1]=s[i];
        s[i]=a;
        printf("YES\n");
        printf("%s\n", s);
        c=1;
        break;
      }
    }
    if(c==0){
      printf("NO\n");
    }
  }

}
