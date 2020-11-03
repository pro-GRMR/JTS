#include <iostream>
using namespace std;
int main()
{
    int n, b, d, waste=0, count=0;
    cin >> n >> b >> d;
    int orange[n];
    for(int i=0; i<n; i++){
        cin >> orange[i];
    }
    for(int i=0; i<n; i++){
        if(orange[i]<=b){
            waste+=orange[i];
            if(waste>d){
                waste=0;
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
