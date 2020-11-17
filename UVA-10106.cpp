#include <iostream>
using namespace std;
void product(string x, string y){
    int lena=x.length(), lenb=y.length(), a[lena], b[lenb], c[lena+lenb];
    for(int i=0; i<lena;i++){
        a[i]=x[lena-1-i]-'0';
        c[i]=0;
    }
    for(int i=0; i<lenb;i++){
        b[i]=y[lenb-1-i]-'0';
        c[lena+i]=0;
    }
    for(int n=0;n<lenb;n++){
        for(int i=0;i<lena;i++){
            c[n+i]+=b[n]*a[i];
        }
    }
    for(int i=0;i<lena+lenb;i++){
        c[i+1]+=c[i]/10;
        c[i]%=10;
    }
    int i=lena+lenb-1;
    while(c[i]==0){
        i--;
    }
    while(i>=0){
        cout << c[i];
        i--;
    }
}
int main()
{
    string a, b;
    while(cin >> a >> b){
        if(a=="0" || b=="0"){
            cout << 0 << endl;
        }
        else{
            if(a.length()>b.length()){
                product(a, b);
                cout << endl;
            }
            else{
                product(b, a);
                cout << endl;
            }
        }
    }
}
