
// https://www.codechef.com/problems/CHN15A

void solve(){
   
   ll n,k;
   cin >> n >> k;
   ll arr[n];
   int ans = 0;
   rep(i,0,n){
    cin>>arr[i];
    if((arr[i]+k)%7 == 0){
      ans++;
    }
   } 
   cout<<ans<<endl;  
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
