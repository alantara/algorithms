#include <bits/stdc++.h>
using namespace std;

#define MAX 212345
typedef pair<int, int> ii;

int _p[MAX], _rank[MAX];

int _find(int u){ return (_p[u] == u) ? u: _find(_p[u]); }

void _union(int u, int v){
  u = _find(u); v = _find(v);
  if(_rank[u] > _rank[v]){
    _p[v] = u;
  }
  else{
    _p[u] = v;
    if(_rank[u] == _rank[v]){
      _rank[v]++;
    }
  }
}

int n, ans = 0;
queue<ii> q;

int main(){
  scanf("%d", &n);
  for(int i = 0; i <= n; i++){
    _p[i] = i;
    _rank[i] = 0;
  }
  for(int i = 0; i < n-1; i++){
    int a, b;
    scanf("%d %d", &a, &b);
    if(_find(a) == _find(b)){
      q.push(ii(a, b));
    }
    else{
      _union(a, b);
      ans++;
    }
  }
  printf("%d\n", n-1-ans);
  int p = _find(1);
  for(int i = 1; i <= n; i++){
    if(p != _find(i)){
      _union(p, i);
      ii f = q.front(); q.pop();
      printf("%d %d %d %d\n", f.first, f.second, p, i);
      p = _find(p);
    }
  }
  return 0;
}