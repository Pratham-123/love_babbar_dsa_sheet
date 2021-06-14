class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
           int val = size/2;
    // your code here
    unordered_map<int,int> arr;
    
    for(int i=0;i<size;i++)
    {
        arr[a[i]]++;
    }
    for(auto x:arr){
        if(x.second>val) return x.first;
    }
        return -1;
        
    }
};