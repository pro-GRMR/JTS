#include <iostream>
using namespace std;
int main()
{
    int n, a, b, p=0, x=4126;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(x<a){
            p=-1;
        }
        x=a;
        if(a!=b){
            cout << "rated" << endl;
            return 0;
        }
    }
    if(p==-1){
        cout << "unrated" << endl;
    }
    else{
        cout << "maybe" << endl;
    }
}
