#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k,min;
        scanf("%d %d",&n,&k);
        int arr[n];
        for(int i=0;i<n;i++){ 
            scanf("%d",&arr[i]);
            if(i==0)
                min = arr[i];
            else if(arr[i] < min)
                min = arr[i];
        }
        if(k-min>0)
            printf("%d\n",k-min);
        else
            printf("0\n");
    }
    return 0;
}