#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
        b[i] = b[i] + a[i];
        cout << b[i] << " ";
    }
    return 0;
}