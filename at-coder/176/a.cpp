#include <bits/stdc++.h>

int n;
int sum=0;

int main(){
    scanf("%d", &n);
    n--;
    while(n--){
        int a;
        scanf("%d", &a);
        sum -= a;
    }
    printf("%d", sum);  
    return 0;
}