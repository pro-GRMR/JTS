#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(a>=b){
        switch(7-a){
            case 1:
                cout << "1/6" << endl;
                break;
            case 2:
                cout << "1/3" << endl;
                break;
            case 3:
                cout << "1/2" << endl;
                break;
            case 4:
                cout << "2/3" << endl;
                break;
            case 5:
                cout << "5/6" << endl;
                break;
            default:
                cout << "1/1" << endl;
        }
    }
    else{
        switch(7-b){
            case 1:
                cout << "1/6" << endl;
                break;
            case 2:
                cout << "1/3" << endl;
                break;
            case 3:
                cout << "1/2" <<  endl;
                break;
            case 4:
                cout << "2/3" << endl;
                break;
            case 5:
                cout << "5/6" << endl;
                break;
            default:
                cout << "1/1" << endl;
        }
    }
}
