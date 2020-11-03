#include <iostream>
using namespace std;

int main()
{
    int count=0, l;
    cin >> l;
    string str;
    cin >> str;
    for(int i=0; i<l-1;i++){
        if(str[i]==str[i+1]){
            count++;
        }
    }
    cout << count << endl;
}
