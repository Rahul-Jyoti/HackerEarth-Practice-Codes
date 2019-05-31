#include<iostream>
using namespace std;

int swap(int arr[],int n,int k)
{
    int temp = arr[k];
    //cout << temp;
    for(int i=k;i<n;i++){
        if(i == n-1){
            arr[n-1] = temp;
        }
        else
            arr[i] = arr[i+1];
    }
    return *arr;
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int j=0,n,count=0;
    cin >> n;
    int called[n];
    for(int i=0;i<n;i++){
        cin >> called[i];
    }
    int ideal[n];
    for(int i=0;i<n;i++){
        cin >> ideal[i];
    }
    for(int i=0;i<n;i++){
        if(called[i] != ideal[i]){
            while(called[i] != ideal[i]){
                *called = swap(called,n,i);
                //cout << "Swapp no. " << count+1 <<endl;
                //display(called,n);
                count++;
            }     
        }
        count++;

    }
    cout << count;
    return 0;
}