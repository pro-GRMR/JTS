#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    long long int mn=a[1]-a[0], mx=a[n-1]-a[0];
    cout << mn << " " << mx << endl;
    for(int i=1;i<n-1;i++){
        mx=max(a[n-1]-a[i],a[i]-a[0]);
        mn=min(a[i]-a[i-1], a[i+1]-a[i]);
        cout << mn << " " << mx << endl;
    }
    cout << a[n-1]-a[n-2] << " " << a[n-1]-a[0] << endl;
    return 0;
}
