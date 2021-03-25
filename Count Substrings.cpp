// https://www.codechef.com/problems/CSUB


void solve(){
    
    ll n;
    cin>>n;
    ll count = 0;
    string s;
    cin>>s;

    rep(i,0,n){
       count += (s[i] - '0');
    }

    ll ans = (count * (count + 1))/2;
    
    cout << ans << endl;    

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
