#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
   
    int n;
    cin>>n;
    int maxim = 0;
    int ans;
    for(int i=1;i<10;i++){
    	if(n%i == 0){
          ans = i; 
    	}
    	maxim = max(maxim,ans);
    }
    
    cout<<maxim;
    
	return 0;

}
