#include <iostream>
using namespace std;
int main()
{
    int n, mn=1000000000, mx=0, k=0;
    cin >> n;
    int ara[n];
    for(int j=0; j<n; j++){
        cin >> ara[j];
        mn=min(mn, ara[j]);
        mx=max(mx, ara[j]);
    }
    for(int j=0; j<n; j++){
        if(ara[j]<mx && ara[j]>mn){
            k++;
        }
    }
    cout << k << endl;
}
