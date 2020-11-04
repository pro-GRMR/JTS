#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, sum=0, count=0;
    cin >> n;
    int ara[n];
    for(int i=0; i<n; i++){
        cin >> ara[i];
        sum+=ara[i];
    }
    sort(ara, ara+n);
    sum=sum/2;
    for(int i=n-1, j=0; j<=sum;i--){
        j+=ara[i];
        count++;
    }
    cout << count << endl;
    return 0;
}
