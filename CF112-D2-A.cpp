    #include <iostream>
    using namespace std;
     
    int main()
    {
        string m, n;
        cin >> m >> n;
        int i=0;
        while(i != m.length()){
            if(m[i]%32 > n[i]%32){
                cout << "1" << endl;
                return 0;
            }
            else if(m[i]%32 < n[i]%32){
                cout << "-1" << endl;
                return 0;
            }
            i++;
        }
        if(i==m.length()){
            cout << "0" << endl;
        }
        return 0;
    }
