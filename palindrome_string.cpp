class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	    int i=0; int j = S.length()-1;
    int flag=0;
    while(i<j)
    {
        if(S[i]==S[j])
        {
            
            i++;
            j--;
        }
        else {
            flag=1;
            break;
        }
    }
     if(flag==0)
      {
        return 1;
      }
       else return 0;
    
	}

};