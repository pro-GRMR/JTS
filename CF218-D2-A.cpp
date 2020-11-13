#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int ara[2*n+1], count=0;
    for(int i=0;i<=2*n;i++){
        cin >> ara[i];
    }
    for(int i=0;count<k;i++){
        if(ara[i]+1<ara[i+1] && ara[i+1]-1>ara[i+2]){
            ara[i+1]--;
            count++;
        }
    }
    for(int i=0;i<2*n;i++){
        cout << ara[i] <<" ";
    }
    cout << ara[2*n] << endl;
    
    return 0;
}
