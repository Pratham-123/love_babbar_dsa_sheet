class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int height[], int n){
        // Code here
        int left =0;
        int right = n-1;
        int maxleft =0;
        int maxright = 0;
        int res=0;
        
        while(left<=right)
        {
            if(height[left]<= height[right])
            {
                if(height[left]>= maxleft) maxleft = height[left];
                else res += maxleft-height[left];
                
                left++;
            }
            
            else{
                if(height[right]>=maxright) maxright = height[right];
                else res += maxright - height[right];
                
                right--;
            }
        }
        return res;
    }
};