#include <iostream>
using namespace std;
int main()
{
    int A, B, i=1;
    cin >> A >> B;
    while(1){
        A*=3;
        B*=2;
        if(A>B){
            break;
        }
        i++;
    }
    cout << i << endl;
    return 0;
}
