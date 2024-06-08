#include <bits/stdc++.h>

int k, n;
char d[101];
int ft[100][26];
int s;

int main(){
    memset(ft, 0, 100*26);

    scanf("%d %s %d", &k, d, &n);
    while(n--){
        char a[101];
        scanf("%s", a);
        for(int i = 0; i < k; i++){
            ft[i][a[i]-'A']++;
        }
    }

    for(int i = 0; i < k; i++){
        int max=-1, max2=-1;
        for(int j = 1; j < 26; j++){
            if(max == -1 || ft[i][j] > ft[i][max]){
                max2=max;
                max=j;
            }
        }
        if(max != -1){
            if(d[i]-'A' == max){
                s+=ft[i][max2];
            }
            else{
                s+=ft[i][max];
            }
        }
    }

    printf("%d", s);

    return 0;
}