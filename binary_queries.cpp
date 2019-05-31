#include<iostream>
using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;
    char arr[n+1];
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    int x,y,z,num=0;
    while(q--){
        cin >> x;
        if(x==1){
            cin >> y;
            arr[y] = char(int(arr[y]) ^ 1);
        }
        else if(x==0){
            cin >> y >> z;
            if(int(arr[z])=='0')
                cout << "EVEN\n";
            else
                cout << "ODD\n";
        }
    }       
    return 0;
}