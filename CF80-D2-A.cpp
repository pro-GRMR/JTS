#include <iostream>
using namespace std;
int main()
{
    int n, m, p[5]={2, 3, 5, 7, 11};
    cin >> n >> m;
    if(m!=3 && m!=5 && m!=7 && m!=11){
        for(int i=n+1;i<m;i++){
            if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
                cout << "NO" << endl;
                return 0;
            }
        }
        if(m%2!=0 && m%3!=0 && m%5!=0 && m%7!=0){
            cout << "YES" << endl;
            return 0;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    else{
        for(int i=0;i<4;i++){
            if(p[i]==n){
                if(p[i+1]==m){
                    cout << "YES" << endl;
                    return 0;
                }
                else{
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }
}
