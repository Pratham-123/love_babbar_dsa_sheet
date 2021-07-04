class Solution{
  public:

    int sb(int a[], int n, int x)
    {
        // Your code goes here   
        int start = 0, end = 0;
        int ans = n+1;
        int sum = 0;
        
        while(end<n)
        {
            while(sum<=x && end<n)
            {
                sum += a[end];
                end++;
            }
            while(sum>x && start<n)
            {
                ans = min(ans, end-start);
                sum -= a[start];
                start++;
            }
        }
        return ans;
    }
    
};