#include<bits/stdc++.h>
using namespace std;
int dis(char a[]){
    int dist = 0;
    int ascii[128];
    for(int i = 0 ; i < 128 ; i++){
        ascii[i] = 0;
    }
    for(int i = 0 ; a[i] != '\0' ; i++){
        ascii[a[i]]++;
    }
    for(int i = 0 ; i < 128 ; i++){
        if(ascii[i] != 0){
            dist++;
        }
    }
    return dist;

}
int main(){
    char a[101];
    scanf("%s",&a);
    if(dis(a) % 2 == 0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }
}
