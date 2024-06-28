#include <bits/stdc++.h>
using namespace std;

#define MAX 21234
vector<string> s[MAX];
char buf1[11234567], buf2[11234567];
int n, m;
map<string, int> w;
int sums[MAX];

int main(){
  scanf("%d", &n); getchar();
  for(int i = 0; i < n; i++){
    fgets(buf1, 11234567, stdin);
    char *suf = buf1;
    int len;
    while(suf[0] != '\n') {
      sscanf(suf, "%s%n", buf2, &len);
      s[i].push_back(string(buf2));
      suf += len;
    }
  }

  scanf("%d", &m);
  for(int i = 0; i < m; i++){
    char tmp1[212345];
    int tmp2;
    scanf("%s %d", tmp1, &tmp2);
    w[string(tmp1)] = tmp2;
  }

  for(int i = 0; i < n; i++){
    for(auto j: s[i]){
      sums[i] += w[j];
    }    
  }

  int sum = 0, maxI = -1, max = 0;
  for(int i = 0; i < n; i++){
    sum += sums[i];
    if(max <= sums[i]){
      max = sums[i];
      maxI = i;
    }
  }

  printf("%d %d\n", sum, maxI + 1);

  return 0;
}