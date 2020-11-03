#include <iostream>
using namespace std;
int main()
{
    string str;
    int count=0, ara[128];
    for(int i=0; i<128; i++){
        ara[i]=0;
    }
    getline(cin, str, '\n');
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            ara[str[i]]++;
        }
    }
    for(int i=0; i<128; i++){
        if(ara[i]!=0){
            count++;
        }
    }
    cout << count << endl;
}
