#include <iostream>
using namespace std;
int main()
{
    int n, k, ch=0;
    cin >> n >> k;
    string all="qwertyuiopasdfghjklzxcvbnm";
    for(int i=0;i<n/k;i++){
        cout << all.substr(0, k);
    }
    cout << all.substr(0, n%k) << endl;
    return 0;
}
