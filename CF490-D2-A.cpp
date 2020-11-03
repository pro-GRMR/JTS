#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int str[n], a1=0, a2=0, a3=0;
    for(int i=0; i<n; i++){
        cin >> str[i];
        switch(str[i]){
            case 1:
                a1++;
                break;
            case 2:
                a2++;
                break;
            case 3:
                a3++;
                break;
        }
    }
    int c1[a1], c2[a2], c3[a3], minimum=min(min(a1, a2), a3);
    cout << minimum << endl;
    for(int i=0, b1=0, b2=0, b3=0; i<n; i++){
        switch(str[i]){
            case 1:
                c1[b1]=i+1;
                b1++;
                break;
            case 2:
                c2[b2]=i+1;
                b2++;
                break;
            case 3:
                c3[b3]=i+1;
                b3++;
                break;
        }
    }
    for(int i=0; i<minimum; i++){
        cout << c1[i] << " " << c2[i] << " " << c3[i] << endl;
    }
    return 0;
}
