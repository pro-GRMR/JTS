#include <iostream>
using namespace std;
int main()
{
    int n, j=0, p=0;
    cin >> n;
    int a[n], k=n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    while(j<n){
        while(a[j]!=k){
            cout << endl;
            j++;
        }
        cout << a[j];
        k--;
        for(int i=0;i!=j;){
            for(;i<j;i++){
                if(a[i]==k){
                    k--;
                    cout << " " << a[i];
                    i=0;
                    break;
                }
            }
        }
        j++;
        cout << endl;
    }
    return 0;
}
