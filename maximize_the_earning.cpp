#include<iostream>
using namespace std;

int main()
{
    int s;
    cin >> s;
    while(s--)
    {
        int n,r;
        cin >> n >> r;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int m = arr[0];
        int count=1;
        for(int i=1;i<n;i++){
            if(arr[i] > m)
            {
                m = arr[i];
                count++;
            }
        }
        cout << "\nNo. of buildings can be seen = " << count << endl;
        cout << count*r << endl;
    }
    return 0;
}