#include <iostream>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int alen=a.length(), blen=b.length();
    if(alen<blen||alen>blen){
        cout << max(alen, blen) << endl;
    }
    else{
        for(int i=0; i<alen; i++){
            if(a[i]==b[i]){
                continue;
            }
            cout << alen << endl;
            return 0;
        }
        cout << "-1" << endl;
        return 0;
    }
    return 0;
}
