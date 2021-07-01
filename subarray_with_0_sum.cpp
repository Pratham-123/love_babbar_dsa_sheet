class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        
      unordered_map<int, int> m;
      
      bool flag = false;
      int s = 0;
      for(int i=0;i<n;i++)
      {
          s = s + arr[i];
          if(m[s] or arr[i]==0 or s==0)
          {
              flag = true;
              break;
          }
          else{
              m[s]=1;
          }
      }
      
      return flag;
        
        
    }
};