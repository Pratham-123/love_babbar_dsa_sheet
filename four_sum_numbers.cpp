class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        // Your code goes here
        vector<vector<int>> res;
        
        if(num.empty()) return res;
        int n= num.size();
        sort(num.begin(),num.end());
        
        for(int i=0;i<n;i++)
        {
            for(int j = i+1;j<n; j++)
            {
                int target_2 = target - num[j] - num[i];
                
                int front = j+1;
                int back = n-1;
                
                while(front <back)
                {
                    int two_sum = num[front] + num[back];
                    
                    if(two_sum < target_2) front++;
                    
                    else if(two_sum>target_2) back--;
                    
                    else{
                        vector<int > jaini(4,0);
                        jaini[0]= num[i];
                        jaini[1] = num[j];
                        jaini[2] =  num[front];
                        jaini[3] = num[back];
                        
                        res.push_back(jaini);
                        
                        while(front <back && num[front] == jaini[2]) ++front;
                        
                        while(front< back && num[back] == jaini[3]) --back;
                    }
                }
                while(j+1<n && num[j+1] ==num[j]) ++j;
            }
            while(i+1<n && num[i+1]==num[i]) ++i;
        }
    }
};