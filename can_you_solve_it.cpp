/*Didn't pass all the test cases....TLE ERROR*/
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int max_val;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int max=0,val;
        for(int i=0;i<n;i++){
            for(int j=0;j<n && j!=i;j++)
            {
                val = abs(arr[i] - arr[j]) + abs(i-j);
                // if(i==0 && j==0){
                //     max = val;
                // }
               // else 
                if(val > max)
                    max = val;
            }
        }
        cout << max << endl;
    }
    return 0;
}