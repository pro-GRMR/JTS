#include <iostream>
#include <algorithm>
using namespace std;

bool bchc(int step, int n){
    int array[n];
    array[0]=0;
    for(int i=1; i<n; i++){
        array[i]=(array[i-1]+step)%n;
    }
    sort(array, array+n);
    for(int i=0; i<n; i++){
        if(array[i]==i){
            continue;
        }
        return true;
    }
    return false;
}
void rjf(int x){
    int n=x, count=10;
    while(n!=0){
        n/=10;
        count--;
    }
    for(int i=0;i<count;i++){
        cout << " ";
    }
    cout << x;
}
int main()
{
    int step, n;
    while(cin >> step >> n){
        rjf(step);
        rjf(n);
        cout << "    ";
        if(bchc(step, n)){
            cout << "Bad Choice" << endl << endl;
        }
        else{
            cout << "Good Choice" << endl << endl;
        }
    }  
}
