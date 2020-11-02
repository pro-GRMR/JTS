#include <iostream>
using namespace std;
int main()
{
    int n, count=0;
    cin >> n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin >> ara[i];
        if(ara[i]!=ara[i-1]){
            count++;
        }
    }
    cout << count << endl;
}
