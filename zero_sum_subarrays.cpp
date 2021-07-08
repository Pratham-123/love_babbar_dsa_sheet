class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
        ll sum =0;
        ll count =0;
        
        unordered_map<ll, int> map;
        map[0]++;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            if(map[sum]==0)
            {
                
                map[sum]++;
            }
            else{
                count = count + map[sum];
                map[sum]++;
            }
        }
        return count;
    }
};