#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int main()
{
    int n, dis=0, num;
    long long int x;
    char cha;
    cin >> n >> x;
    for(int i=0; i<n; i++){
        cin >> cha >> num;
        if(cha=='+'){
            x+=num;
        }
        else{
            if(num<=x){
                x-=num;
            }
            else{
                dis++;
            }
        }
    }
    cout << x << " " << dis << endl;
    return 0;
}
