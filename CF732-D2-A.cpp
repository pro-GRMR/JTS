#include <iostream>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    for(int i=1;i<11;i++){
        if(k*i%10==0){
            cout << i << endl;
            return 0;
        }
        if((k*i-r)%10==0){
            cout << i << endl;
            return 0;
        }
    }
    cout << "10" << endl;
    return 0;
}
