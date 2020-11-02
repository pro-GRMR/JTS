#include <iostream>
using namespace std;

int main()
{
    int n[3], m, count=0;
    cin >> m;
    for(int k=0; k<m; k++){
        for(int i=0; i<3; i++){
            cin >> n[i];
        }
        if(n[0]+n[1]+n[2]>1){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
