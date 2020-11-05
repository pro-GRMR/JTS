#include <iostream>
using namespace std;
int main()
{
    int n, t, x=1;
    cin >> n >> t;
    if(t<10){
        cout << t;
        for(int i=1; i<n;i++){
            cout << "0";
        }
    }
    else{
        if(n==1){
            cout << "-1";
        }
        else{
            cout << t;
            for(int i=2; i<n;i++){
                cout << "0";
            }
        }
    }
    cout << endl;
}
