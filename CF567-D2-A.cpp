#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    long long int a[n], b[n], c[3*n], mx, mn;
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        mx=max(abs(a[i]-a[n-1]),abs(a[i]-a[0]));
        if(i!=0 && i!=n-1){
            mn=min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]));
        }
        else if(i==0){
            mn=abs(a[i]-a[i+1]);
        }
        else{
            mn=abs(a[i]-a[i-1]);
        }
        cout << mn << " " << mx << endl;
    }
    return 0;
}
