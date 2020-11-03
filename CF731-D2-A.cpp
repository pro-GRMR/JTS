#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int x=abs(str[0]-'a'), sum=0;
    if(x>13){
        sum+=26-x;
    }
    else{
        sum+=x;
    }
    for(int i=1; i<str.length(); i++){
        x=abs(str[i]-str[i-1]);
        if(x>13){
            sum+=26-x;
        }
        else{
            sum+=x;
        }
    }
    cout << sum << endl;
}
