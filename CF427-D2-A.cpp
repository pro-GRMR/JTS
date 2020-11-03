#include <iostream>
using namespace std;

int main()
{
    int n, police=0, crime=0;
    cin >> n;
    int pol[n];
    for(int i=0; i<n;i++){
        cin >> pol[i];
        if(pol[i]<0){
            if(police==0){
                crime++;
            }
            else{
                police--;
            }
        }
        else{
            police+=pol[i];
        }
    }
    cout << crime << endl;
}
