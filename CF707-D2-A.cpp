#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    char str[n];
    for(int i=0;i<m; i++){
        for(int j=0;j<n;j++){
            cin >> str[j];
            if(str[j]!='B' && str[j]!='G' && str[j]!='W'){
                cout << "#Color" << endl;
                return 0;
            }
        }
    }

    cout << "#Black&White" << endl;
    return 0;
}
