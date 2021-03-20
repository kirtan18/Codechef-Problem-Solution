void solve(){
   
 lli c; cin >> c;

 lli x = pow(2,floor(log2(c))) - 1;
 lli y = x ^ c;

 cout<< x * y <<endl;
 
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
