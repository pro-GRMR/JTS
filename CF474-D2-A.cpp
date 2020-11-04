#include <iostream>
using namespace std;
int main()
{
    char n;
    cin >> n;
    string all_char="qwertyuiopasdfghjkl;zxcvbnm,./", str;
    cin >> str;
    if(n=='R'){
        for(int i=0;i<str.length();i++){
            for(int j=0; j<all_char.length(); j++){
                if(str[i]==all_char[j]){
                    str[i]=all_char[j-1];
                    break;
                }
            }
        }
    }
    else{
        for(int i=0;i<str.length();i++){
            for(int j=0; j<all_char.length(); j++){
                if(str[i]==all_char[j]){
                    str[i]=all_char[j+1];
                    break;
                }
            }
        }
    }

    cout << str << endl;
    return 0;
}
