#include <bits/stdc++.h>
using namespace std;

#define INF 2123456

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
vector<vector<ii>> ma(212345); // i=de onde vem // first-para onde vai // second-custo
iii dk[212345]; // i-vertice // first-flag visto // secondfirst-custo minimo // secondsecond-pai

int n, m, k;

int dikstra(){
  for(int i = 1; i <= n; i++){
    dk[i] = iii(0, ii(INF, -1));
  }
  dk[1].first = 1;
  dk[1].second.first = 0;
  dk[1].second.second = 1;

  deque<int> fila;
  fila.push_back(1);
  while(!fila.empty()){
    int n = fila.front(); fila.pop_front();
    for(unsigned i = 0; i < ma[i].size(); i++){
      if(dk[ma[n][i].first].second.first > ma[n][i].second + dk[n].second.first){
        dk[ma[n][i].first].second.first = ma[n][i].second + dk[n].second.first;
        dk[ma[n][i].first].second.second = n;
      }
      if(dk[ma[n][i].first].first == 0){
        dk[ma[n][i].first].first = 1;
        fila.push_back(i);
      }
    }
  }

  int p = n, s = 0;
  while(p != 1){
    p = dk[p].second.second;
    s++;
  }
  return s+1;
}

int main(){
  scanf("%d %d %d", &n, &m, &k);
  while(m--){
    int u, v, w;
    scanf("%d %d %d", &u, &v, &w);
    ma[u].push_back(ii(v, w));
  }
  printf("F");
  int cam = dikstra();
  printf("%d", (cam > k) ? -1: cam);
  return 0;
}