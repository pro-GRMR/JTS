#include <iostream>
using namespace std;
int main()
{
    int f, h, count=0;
    cin >> f >> h;
    int ara[f];
    for(int i=0;i<f;i++){
        cin >> ara[i];
        if(ara[i]>h){
            count+=2;
        }
        else{
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
