#include <iostream>
using namespace std;
int main()
{
    int n, a=1, b=0;
    string x, y, temp;
    cin >> n;
    cin >> x;
    for(int i=1;i<n; i++){
        cin >> temp;
        if(x==temp){
            a++;
        }
        else{
            y=temp;
            b++;
        }
    }
    if(a>b){
        cout << x << endl;
    }
    else{
        cout << y << endl;
    }
    return 0;
}
