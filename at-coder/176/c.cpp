#include <bits/stdc++.h>

char s[212345], t[4];

int main(){

    scanf("%s %s", s, t);

    int a=0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i]-'a' == t[a]-'A'){
            a++;
        }
    }

    if(t[2]=='X' && a == 2 || a == 3){
        printf("Yes");
    }else{
        printf("No");
    }



    return 0;
}