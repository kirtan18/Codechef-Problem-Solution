https://www.codechef.com/LTIME95C/problems/ARRROT




void solve() {
   
   lli n;cin >>n;
   lli ans = 0;
   for(int i = 0 ; i < n ;i++){
      lli a; cin >> a;
      ans = (ans+a+mod)%mod; 
   }
 
   lli q;
   cin >> q;
   while(q--){
     ans = (2*ans)%mod;
     cout<<ans<<"\n";
   }

   
}
