class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int> set;
      for(int i=0;i<N;i++)
      {
          set.insert(arr[i]);
      }
      
      int ans = INT_MIN;
      
      for(int i=0;i<N;i++)
      {
          if(set.find(arr[i]-1)== set.end())
          {
              int j= arr[i]+1;
              
              while(set.find(j)!= set.end())
              {
                  j++;
              }
              
              ans = max(ans, j-arr[i]);
          }
      }
      return ans;
    }
};