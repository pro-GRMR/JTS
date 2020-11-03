#include <iostream>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n;
    int ara[n];
    for(int i=0; i<n; i++){
        cin >> ara[i];
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        ara[a]+=ara[a-1]-b;
        ara[a-2]+=b-1;
        ara[a-1]=0;
    }
    for(int i=0; i<n; i++){
        cout << ara[i] << endl;
    }
}
