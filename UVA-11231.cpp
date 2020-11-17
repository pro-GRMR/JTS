#include <iostream>

using namespace std;

int main(){
    int m, n, c, x, y, xcount=0, ycount=0, sum;
    cin >> n >> m >> c;
    while(m!=0){
        if(c==1){
            xcount=0;
            ycount=0;
            x=m;
            y=n;
            while(x>7){
                x-=2;
                xcount++;
            }
            while(y>7){
                y-=2;
                ycount++;
            }
            sum=xcount*ycount;
            xcount=0;
            ycount=0;
            x=m-1;
            y=n-1;
            while(x>7){
                x-=2;
                xcount++;
            }
            while(y>7){
                y-=2;
                ycount++;
            }
            sum+=xcount*ycount;
            cout << sum << endl;
        }
        else{
            xcount=0;
            ycount=0;
            x=m-1;
            y=n;
            while(x>7){
                x-=2;
                xcount++;
            }
            while(y>7){
                y-=2;
                ycount++;
            }
            sum=xcount*ycount;
            xcount=0;
            ycount=0;
            x=m;
            y=n-1;
            while(x>7){
                x-=2;
                xcount++;
            }
            while(y>7){
                y-=2;
                ycount++;
            }
            sum+=xcount*ycount;
            cout << sum << endl;
        }
        cin >> n >> m >> c;
    }

    return 0;
}
