

    #include <iostream>
    using namespace std;
     
    int main()
    {
        string n;
        int m, x;
        cin >> m;
        for(int i=0; i<m; i++){
            cin >> n;
            x=n.length();
            if(x>10){
                cout << n[0] << x-2 << n[x-1] << endl;
            }
            else{
                cout << n << endl;
            }
        }
        return 0;
    }
