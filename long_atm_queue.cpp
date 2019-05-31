#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int val,temp,count=1;
    for(int i=0;i<t;i++){
        cin >> val;
        if(val - temp < 0 && i != 0)
            count++;
        temp = val;
    }
    cout << count;
    return 0;
}