#include <iostream>
using namespace std;

int main()
{
    int n, count=0;
    cin >> n;
    int home[n], away[n];
    for(int i=0;i<n;i++){
        cin >> home[i] >> away[i];
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if(away[i]==home[j] && i!=j){
                count++;
            }
        }
    }

    cout << count << endl;
}
