void rotate(int arr[], int n)
{
    int arr1[n];
    
    arr1[0]= arr[n-1];
    
    for(int i=0;i<n-1;i++)
    {
        arr1[i+1]= arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        arr[i]=arr1[i];
    }
}