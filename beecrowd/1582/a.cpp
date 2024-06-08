#include <bits/stdc++.h>
using namespace std;

int euclides(int a, int b){
  if(b == 0) return a;
  return euclides(b, a % b);
}

int main(){
  int a, b, c, ans = 0;

  while(scanf("%d %d %d", &a, &b, &c) != EOF){
    ans=1;
    if(a > b) swap(a, b);
    if(b > c) swap(b, c);

    if(c*c == a*a + b*b){
      ans=2;

      if(euclides(a, euclides(b, c)) == 1){
        ans=3;
      }
    }

    switch(ans){
      case 1: printf("tripla\n"); break;
      case 2: printf("tripla pitagorica\n"); break;
      case 3: printf("tripla pitagorica primitiva\n"); break;
    }
  }
}