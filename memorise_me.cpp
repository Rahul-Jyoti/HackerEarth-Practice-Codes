        #include<iostream>
        using namespace std;
         
        int main()
        {
            int t;
            scanf("%d",&t);
            int arr[100000];
            int val;
            for(int i=0;i<t;i++){
                scanf("%d",&val);
                arr[val]++;
            }
            int nq;
            scanf("%d",&nq);
            int q;
            while(nq--)
            {
                scanf("%d",&q);
                if(arr[q]==0)
                    printf("NOT PRESENT\n");
                else
                    printf("%d\n",arr[q]);
            }
            return 0;
        }