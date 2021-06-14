class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        vector<int> a;
        a.push_back(A);
        a.push_back(B);
        a.push_back(C);
        
        sort(a.begin(),a.end());
        
        int b = a[1];
        
        return b;
        
    }
};