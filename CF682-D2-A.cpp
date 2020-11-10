#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c, p, q;
    cin >> n >> c >> a >> b;
    for(int i=1;i<n;i++){
        cin >> p >> q;
        if((p!=a && p!=7-a && p!=b && p!=7-b)||(q!=a && q!=7-a && q!=b && q!=7-b)){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
