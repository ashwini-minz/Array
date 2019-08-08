#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ar[n],i,flag;
	    for(i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(ar[i]<=ar[i+1])
	        {
	            flag=0;
	        }
	        else
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
