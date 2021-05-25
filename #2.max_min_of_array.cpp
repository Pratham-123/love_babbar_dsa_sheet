#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	//code

	
	int t;
	cin>>t;
	
	while(t--){
	int n;
	cin>>n;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	


sort(a,a+n);

int min = a[0];
int max = a[n-1];

cout<<max<<" "<<min<<"\n";
}
	return 0;

}