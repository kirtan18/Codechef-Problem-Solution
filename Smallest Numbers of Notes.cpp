#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long int n;
	    cin>>n;
	    int count=0;
	    while(n!=0)
	    {
	        if(n>=100)
	        {
	            n=n-100;
	            count++;
	        }
	        if(n>=50 && n<100)
	        {
	            n=n-50;
	            count++;
	        }
	        if(n>=10 && n<50)
	        {
	            n=n-10;
	            count++;
	        }
	        if(n>=5 && n<10)
	        {
	            n=n-5;
	            count++;
	        }
	        if(n>=2 && n<5)
	        {
	            n=n-2;
	            count++;
	        }
	        if(n==1)
	        {
	            n=n-1;
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
