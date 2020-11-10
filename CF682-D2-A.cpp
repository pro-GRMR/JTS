#include <iostream>
using namespace std;
int main()
{
    unsigned long long int m, n, a[5], b[5];
    cin >> n >> m;
    for(int i=0; i<5; i++){
        a[i]=n/5;
        b[i]=m/5;
    }
    for(int i=0; i<n%5; i++){
        a[i]++;
    }
    for(int i=0; i<m%5; i++){
        b[i]++;
    }
    cout << a[0]*b[3]+a[1]*b[2]+a[2]*b[1]+a[3]*b[0]+a[4]*b[4] << endl;
}
