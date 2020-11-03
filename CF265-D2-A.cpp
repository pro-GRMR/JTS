#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int k=0;
    for(int i=0; i<b.length();i++){
        if(b[i]==a[k]){
            k++;
        }
    }
    cout << k+1 << endl;
    return 0;
}
