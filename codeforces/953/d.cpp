#include <bits/std++.h>
using namespace std;

#define MAX 212345
typedef long long ll;

int a[MAX];

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, c, m = 0;
    scanf("%d %d", &n, &c);
    for(int i = 0; i < n; i++){
      int ai;
      m = max(ai, m);
      scanf("%d", &ai);
      a[i] = ai;
    }
    if(a[i] == max)
  }
  return 0;
}