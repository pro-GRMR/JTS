#include <iostream>
using namespace std;
void letter_change(string inp);
int main()
{
    string inp;
    cin >> inp;
    letter_change(inp);
}
void letter_change(string inp)
{
    int length = inp.length(), caps=0, small=0;
    string a;
    for(int i=0;i<length;i++){

        if(inp[i]<='Z'){
            caps++;
            a[i]=inp[i]+32;
        }
        else{
            small++;
            a[i]=inp[i];
        }
    }
    if(small>=caps){
        for(int i=0;i<length;i++){
            cout << a[i];
        }
        cout << endl;
    }
    else{
        for(int i=0;i<length;i++){
            if(inp[i]<='Z'){
                a[i]=inp[i];
            }
            else{
                a[i]=inp[i]-32;
            }
            cout << a[i];
        }
        cout << endl;
    }
}
