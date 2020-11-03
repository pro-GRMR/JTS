#include <iostream>
using namespace std;
int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int s=n ;
    for(int i=1, x=1; s>0 ;i++){
        if(i%t==0){
            n-=k;
            s-=k;
        }
        if(i>d){
            if(x%t==0){
                s-=k;
            }
            x++;
        }
    }
    if(n>0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
