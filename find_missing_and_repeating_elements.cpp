public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *arr1= new int(2);
        sort(arr,arr+n);
        
       
        
        bool present[n+1] = {false};
        
        for(int i=0;i<n;i++)
        {
            if(present[arr[i]]==true)
            {
                arr1[0]=arr[i];
            }
            present[arr[i]]= true;
        }
         for(int i=1;i<=n;i++)
        {
            if(present[i]==false)
            {
                arr1[1]= i;
            }
        }
        return arr1;
    }