#include <bits/stdc++.h>
using namespace std;

#define MAX 212345

typedef pair<int, int> ii;
typedef pair<ii, char> iii;

char s[MAX];
int pb[MAX];
iii ans[MAX];

int main(){
  scanf("%s", s);

  int sum = 0, n=0;
  for(int i = 0; s[i]!='\0'; i++, n++){
    pb[i]=sum;
    sum+=(s[i]=='(') ? 1: -1;
    ans[i] = iii(ii(pb[i], i), s[i]);
  }

  sort(ans, ans+n, [&](auto a, auto b){
    if(a.first.first < b.first.first) return true;
    if(b.first.first > a.first.first) return false;
    return a.first.second > b.first.second;
  });

  for(int i = 0; i < n; i++){
    iii e = ans[i];
    printf("%c", e.second);
  }
  printf("\n");


}