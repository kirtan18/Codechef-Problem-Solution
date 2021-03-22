void solve(){
   for(int i=2;i<=1000;i++){
    cout<< i * i <<endl;
    int x;
    cin>>x;
    if(x == 0) continue;
    else if(x==1) break;
    else break;
   }
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
