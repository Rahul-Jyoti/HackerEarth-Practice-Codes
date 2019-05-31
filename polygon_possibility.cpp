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
        int arr[n],sum=0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(sum - arr[i] < arr[i]){
                count++;
            }
        }
        if(count==0)
            cout << "Yes\n";
        else
            cout << "No\n";

    }
    return 0;
}