void solve(){
   ll n, m, k;
   cin >> n >> m >> k;

   //1st column
   ll ans = 0;
   for(ll i =1; i <= n; i++){
    if(min(i,m) % 2 == 1){
      ans ^= k + i + 1;
    }
   }

   //last row
   for(ll j = 2; j <= m; j++){
    if(min(n, m - j + 1) % 2 == 1){
      ans ^= k + n + j;
    }
   }

   cout<< ans << "\n";
   }
 
signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
    int T;cin>>T;
    while(T--){
    solve();
    }
return 0;
}
