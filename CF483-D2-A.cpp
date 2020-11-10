    #include <iostream>
    using namespace std;
    int main(){
        int n, tc, k, ara[10]={0,0,0,0,0,0,0,0,0,0};
        cin >> tc >> k;
        int count=0;
        for(int i=0;i<tc;i++){
            cin >> n;
            while(n!=0){
                ara[n%10]=1;
                n/=10;
            }
            for(int j=0;j<=k;j++){
                if(ara[j]==0){
                    count--;
                    break;
                }
            }
            for(int j=0;j<10;j++){
                ara[j]=0;
            }
            count++;
        }
        cout << count << endl;
    }
