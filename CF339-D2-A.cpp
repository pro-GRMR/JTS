#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int len=str.length(), a1=0, a2=0, a3=0;
    for(int i=0; i<len; i++){
        switch(str[i]){
            case '1':
                a1++;
                break;
            case '2':
                a2++;
                break;
            case '3':
                a3++;
                break;
        }
    }

    if(a1!=0){
        cout << "1";
    }
    for(int i=1;i<a1;i++){
        cout << "+1";
    }
    if(a1==0 && a2!=0){
        cout << "2";
    }
    else if(a2!=0){
        cout << "+2";
    }
    for(int i=1;i<a2;i++){
        cout << "+2";
    }
    if(a1==0 && a2==0){
        cout << "3";
    }
    else if(a3!=0){
        cout << "+3";
    }
    for(int i=1;i<a3;i++){
        cout << "+3";
    }
    cout << endl;
    return 0;
}
