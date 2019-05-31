#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,val;
    cin >> n;
    vector<int> arr;
    vector<int> r;
    for (int i = 0; i<n; i++){
        cin >> val;
        arr.push_back(val); 
    }
    int m;
    for(auto i = arr.end();i >= arr.begin();i--){
        cout << "\n*i is " << *i <<endl;
        if(*i >= m && *i!=0){
            m = *i;
            cout << m << "  ";
            r.push_back(m);
        }
    }
    cout << endl;
    reverse(r.begin(),r.end());
    for(int i=0;i<r.size();i++){
        cout << r[i] << " ";
    }
    return 0;















    // int n;
    // cin >> n;
    // int arr[n];
    // int s[n/2];
    // for(int i=0;i<n;i++){
    //     cin >> arr[i];
    // }
    // int m;
    // m = 0;
    // int j=0;
    // for(int i=n-1;i>=0;i--){
    //     if(arr[i] > m){
    //         m = arr[i];
    //         s[j] = arr[i];
    //         j++;
    //     }
            
    // }
    // for(int k=j-1;k>=0;k--){
    //     cout << s[k] << " ";
    // }
    // return 0;
}