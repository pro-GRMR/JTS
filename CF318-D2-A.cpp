    #include <iostream>
    using namespace std;
     
    int main()
    {
        long long int n, m;
        cin >> m >> n;
        long long int x= (m+1)/2;
        if(n<=x){
            cout << 2*n-1 << endl;
        }
        else{
            cout << 2*(n-x) << endl;
        }
        return 0;
    }
