// https://www.codechef.com/LTIME94C/problems/IMDB




void solve(){
    
    int n , x;
    cin >> n >> x;
    int maxi = 0;
    int s[n];
    int r[n];
    
    rep(i,0,n){
        cin >> s[i] >> r[i];
    }

    rep(i,0,n){
       
       if(s[i] == x){
         if(maxi < r[i]){
            maxi = r[i];
         }
       }
       if(s[i] < x ){
         if(maxi < r[i]){
            maxi = r[i];
         }
       }
       if(s[i] > x){
        continue;
       }

    }
   cout << maxi << endl;
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
