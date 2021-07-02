class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    
	    long long maxi = arr[0];
	    
	    long long mini = arr[0];
	    
	    long long prod = arr[0];
	    
	    for(int i=1; i < n;i++)
	    {
	        if(arr[i]<0)
	        {
	            swap(mini,maxi);}
	            
	            maxi = max((long long) arr[i], maxi*arr[i]);
	            
	            mini = min((long long)arr[i], mini*arr[i]);
	            
	            if(maxi>prod) prod = maxi;
	        
	    }
	    return prod;
	}
};