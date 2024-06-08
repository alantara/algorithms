#include <bits/stdc++.h>

char s[101];
int fr[26], n[101];

int main(){
    memset(fr, 0, 26);
    memset(n, 0, 101);

    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++){
        fr[s[i]-'a']++;
    }

    for(int i = 0; i < 26; i++){
        n[fr[i]]++;
    }

    int br=0;
    for(int i = 1; i < 101; i++){
        if(n[i] == 0 || n[i] == 2){
            continue;
        }
        br=1;
    }

    br? printf("No") : printf("Yes");

    return 0;
}