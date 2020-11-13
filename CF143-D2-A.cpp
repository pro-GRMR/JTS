    #include <iostream>
    using namespace std;
    int main()
    {
        int a1, a2, b1, b2, d1, d2, p1, p2, q1, q2;
        cin >> a1 >> a2 >> b1 >> b2 >> d1 >> d2;
        for(p1=1; p1<10; p1++){
            if(p1>=a1 || p1>=b1 || p1>= d1 || 2*p1==a1 || 2*p1==b1 || 2*p1==d1){
                continue;
            }
            p2=b1-p1;
            q1=a1-p1;
            q2=d1-p1;
            if(p2+q2==a2 && q1+q2==b2 && q1+p2==d2 && q1!=p2 && q1!=q2 && p2!=q2 && p2<10 && q1<10 && q2<10){
                cout << p1 << " " << q1 << endl << p2 << " " << q2 << endl;
                return 0;
            }
        }
        cout << -1 << endl;
        return 0;
    }
