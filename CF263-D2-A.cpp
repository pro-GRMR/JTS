#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int mat[5][5], count;
    for(int j=0;j<5;j++){
        for(int i=0;i<5;i++){
            cin >> mat[j][i];
            if(mat[j][i]==1){
                count=abs(j-2)+abs(i-2);
            }
        }
    }

    cout << count << endl;
    return 0;
}
