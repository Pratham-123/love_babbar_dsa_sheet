class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    int arr[256]= {0};
	    string result;
	    
	    for(int i=0;i<str.length();i++)
	    {
	        if(arr[str[i]]==0){
	            result += str[i];
	            arr[str[i]]++;
	        }
	    }
	    return result;
	}
};