#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
   
    int T;
    cin>>T;
    while(T--){
    	long long n;
    	cin>>n;
        long long arr[n];
    	
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}

    	sort(arr,arr+n);

    	long long curr = abs(arr[0]-arr[n-1]) + abs(arr[n-1] -arr[1]) + abs(arr[0] - arr[1]);
         
        cout<<curr<<endl; 
    }
	return 0;
        

}
