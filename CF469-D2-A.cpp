#include <iostream>
using namespace std;
int main()
{
    int n, p, q, x;
    cin >> n;
    n++;
    int ara[n];
    for(int i=0;i<n;i++){
        ara[i]=0;
    }
    cin >> p;
    for(int i=0;i<p;i++){
        cin >> x;
        ara[x]++;
    }
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> x;
        ara[x]++;
    }
    for(int i=1;i<n;i++){
        if(ara[i]==0){
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
}
