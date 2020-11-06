    #include <iostream>
    using namespace std;
    int main()
    {
        int n, i=0, sum=0;
        cin >> n;
        char ch;
        string tempstr;
        for(;i<n;i++){
            cin >> ch >> tempstr;
            switch(ch){
            case 'T':
                sum+=4;
                break;
            case 'C':
                sum+=6;
                break;
            case 'O':
                sum+=8;
                break;
            case 'D':
                sum+=12;
                break;
            case 'I':
                sum+=20;
            }
        }
        cout << sum << endl;
        return 0;
    }
