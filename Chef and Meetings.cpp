#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include <stdlib.h>
#include<string>
#include<unordered_map>

#define longlongint lli
#define longlongchar llc
using namespace std;


void solve() {
	
	string str, s1;
	cin >> str;
	cin >> s1;

	int hh = stoi(str.substr(0, 2));
	if (hh == 12) {
		hh = 0;
	}
	if (s1[0] == 'A' && s1[1] == 'M') {
		hh += 0;
	}
	else {
		hh += 12;
	}
	int min =stoi(str.substr(3, 2));
	int time = (hh * 100) + min;
    
    int n1;
    cin>>n1;
    for(int i=0;i<n1;i++){
    string s2,s3,s4,s5;
    cin>>s2;
    cin>>s3;
    cin>>s4;
    cin>>s5;

    int hh1 =stoi(s2.substr(0,2));
    if(hh1 == 12){
    	hh1 = 0;
    }
    if(s3[0] == 'A' && s3[1] == 'M'){
    	hh1 += 0;
    }
    else{
    	hh1 += 12;
    }

    int min1 =stoi(s2.substr(3,2));
    int time1 = (hh1 * 100)+min1;  
    
    int hh2 =stoi(s4.substr(0,2));
    if(hh2 == 12){
    	hh2 = 0;
    }
    if(s5[0] == 'A' && s5[1] == 'M'){
    	hh2 += 0;
    }
    else{
    	hh2 += 12;
    }
      
    int min2 = stoi(s4.substr(3,2));
    int time2 = (hh2 * 100) + min2; 

    if(time >= time1 && time <= time2){
    	cout<<"1";
    }  
    else{
    	cout<<"0";
    }
   }
    cout<<endl;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif


	int T;
	cin >> T;
	while (T--) {
		solve();
	}
	return 0;

}
