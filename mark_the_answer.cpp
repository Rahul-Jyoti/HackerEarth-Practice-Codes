    #include<iostream>
    using namespace std;
     
    int main()
    {
        int n,x;
        cin >> n >> x;
        int arr[n];
        int count=0,flag=0,p=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(flag ==1 && arr[i] > x)
            {
                if(i==1)
                    cout << "0";
                else
                    cout << count;
                p = 1;
                flag++;
            }
            else if(arr[i] <= x)
                count++;
            else if(flag == 0){
                flag++;
                //count++;
                continue;
            }
            
     
        }
        if(p!=1)
            cout << count;
     
        return 0;
    }
