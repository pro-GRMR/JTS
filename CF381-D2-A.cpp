#include <iostream>
using namespace std;

int main()
{
    int n, S=0, D=0;
    cin >> n;
    int ara[n];
    for(int i=0; i<n; i++){
        cin >> ara[i];
    }
    for(int i=0, j=n-1, x=0; i<=j;x++){
        if(x%2==0){
            if(ara[i]>ara[j]){
                S+=ara[i];
                i++;
            }
            else{
                S+=ara[j];
                j--;
            }
        }
        else{
            if(ara[i]>ara[j]){
                D+=ara[i];
                i++;
            }
            else{
                D+=ara[j];
                j--;
            }
        }
    }
    cout << S << " " << D << endl;
}
