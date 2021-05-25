#include <iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){

	
	int n;
	cin>>n;
	
	int a[n] ;
	
	for (int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	
	int i=0, j=n-1;
	
	while(i<j){
	    swap(a[i],a[j]);
	    i++; j--;
	}
	
	for(i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
	}
	
	return 0;
}