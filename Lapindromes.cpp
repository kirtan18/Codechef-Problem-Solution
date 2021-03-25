// https://www.codechef.com/problems/LAPIN

void solve(){
    
    string s;cin>>s;
    int n = s.length();

    int count1[MAX_CHAR] = {0};
    int count2[MAX_CHAR] = {0};
    
    if(n == 1){
        cout<<"YES"<<endl;
        return;
    }

    for(int i=0;i<n/2;i++){
        count1[s[i] - 'a']++;
    }

    for(int i = (n+1)/2 ; i < n ; i++){
        count2[s[i] - 'a']++;
    }
   
    for(int i=0;i<MAX_CHAR;i++){
        if(count1[i] != count2[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    
    cout<<"YES"<<endl; 
}

 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    int t; cin>>t;
     while(t--){
      solve();
     } 
return 0;
}
