#include <iostream>
using namespace std;
int main()
{
    string song;
    cin >> song;
    song+="WUB";
    for(int i=0, x, len=song.length(), count=1;i<len;){
        x=song.find("WUB", i);
        if(x!=i){
         if(count!=1){
             cout << " " << song.substr(i, x-i);
         }
         else{
             cout << song.substr(i, x-i);
         }
         count=0;
        }
        i=x+3;
    }
    cout << endl;
    return 0;
}
