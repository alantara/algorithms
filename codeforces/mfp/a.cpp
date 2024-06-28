#include <bits/stdc++.h>
using namespace std; 
const int MAX = 1e5;

int n;

string s(int n) {
  if(n == 1) return string("a");
  string tmp = s(n-1);
  return (int)tmp.size() < MAX ? tmp + (char)('a'+n-1) + tmp : tmp;
}

int main(){
  scanf("%d", &n);
  string ans = s(n);
  for(int i = 0; i < MAX && ans[i]; ++i) printf("%c", ans[i]);
  printf("\n");
  return 0;
}