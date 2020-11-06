    #include <iostream>
    using namespace std;
    int main()
    {
        int m, n, a;
        cin >> m >> n >> a;
        long long int x=(m+a-1)/a, y=(n+a-1)/a;
        cout << x*y << endl;
        return 0;
    }
