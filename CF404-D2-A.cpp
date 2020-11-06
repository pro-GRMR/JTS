#include <iostream>
using namespace std;
int main()
{
    int a, b, c, temp, n;
    cin >> n;
    n--;
    string x;
    cin >> x;
    for(int i=0, l=n, temp=x[0], c=x[1]; i<=n; i++, l--){
        a=x[i], b=x[l];
        if(a!=b||temp!=a||c==a){
            cout << "NO" << endl;
            return 0;
        }
        for(int k=0;k<=n;k++){
            if(k!=i && k!=l && x[k]!=c){
                cout << "NO"<< endl;
                return 0;
            }
        }
        cin >> x;
        temp=a;
    }
    cout << "YES" << endl;
    return 0;
}
