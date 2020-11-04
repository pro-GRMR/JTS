#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ara[n];
    int count[26], x=0;
    for(int i=0; i<26;i++){
        count[i]=0;
    }
    for(int j=0; j<n; j++){
        cin >> ara[j];
        count[ara[j]%32-1]=1;
    }
    for(int i=0; i<26;i++){
        if(count[i]==1){
            x++;
        }
    }
    if(x==26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
