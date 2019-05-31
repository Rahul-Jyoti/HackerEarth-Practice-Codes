#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,sec,sum=0;
        cin >> n >> k;
        int alice[n],bob[n];
        for(int i=0;i<n;i++){
            cin >> alice[i];
        }
        int max=0;
        for(int i=0;i<n;i++){
            cin >> bob[i];
            if(bob[i] > max)
                max = bob[i];
        }
        for(int i=0;i<n;i++){
            int dif = max+1 - alice[i]; 
            if(dif >= 0)
                sum = sum + (dif*k);
        }
        cout << sum << endl;
    }
    return 0;
}