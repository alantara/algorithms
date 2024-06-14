#include <bits/stdc++.h>
using namespace std;

#define MAX 212345

int t, n, m, i;
int a[MAX], b[MAX], d[MAX];
map<int, int> fr;

int main(){
  scanf("%d", &t);
  while(t--){
    fr.clear();
    scanf("%d", &n);
    for(i = 0; i < n; i++){
      scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++){
      scanf("%d", &b[i]);
    }

    scanf("%d", &m);
    for(i = 0; i < m; i++){
      scanf("%d", &d[i]);
    }

    for(i = 0; i < m; i++){
      fr[d[i]]++;
    }

    int yes = 1, last = 0;
    for(i = 0; i < n; i++){
      if(b[i] == d[m-1]){
        last = 1;
      }
      if(a[i] != b[i]){
        fr[b[i]]--;
        if(fr[b[i]] < 0){
          yes = 0;
          break;
        }
      }
    }
    printf("%s\n", yes && last ? "YES": "NO");
  }

  return 0;
}