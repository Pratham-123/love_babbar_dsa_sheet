class Solution{
public:
    void sort012(int a[], int n)
    {
        // coode here 
        int i=0;
        int n0=0, n1=0, n2;
        for(int b=0;b<n;b++)
        {
            if(a[b]==0){
                n0 ++;
            }
            else if(a[b]==1){
                n1 ++;
            }
            else{
                n2 ++;
            }
        }
        
        int k=0;
        
        for(int i=0;i<n0;i++) a[k++]=0;
        for(int i=0;i<n1;i++) a[k++]=1;
        for(int i=0;i<n2;i++) a[k++]=2;

        
        
    }
};