#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,flag=0;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]>0)
	            flag=1;
	    }
	    int ms=0 ,cs=0;
    	for(i=0;i<n;i++)
    	{
    		cs=cs+arr[i];
    		if(cs<0)
    		{
    			cs=0;
    		}
    		if (cs>ms)
    		{
    			ms=cs;
    		}
    	}
    	if (flag==1)
    	    cout<<ms<<endl;
    	else if(flag==0)
    	{
    	   int num = sizeof(arr)/sizeof(arr[0]); 
           sort(arr, arr+num);
           cout<<arr[num-1]<<endl;
    	}
    	}
	return 0;
}
