void solve(){
    int w1,w2,x1,x2,m;
    cin>>w1>>w2>>x1>>x2>>m;

    int diff = w2-w1;

    if(m*x1 <= diff && m*x2 >= diff){
      cout<<1<<endl;
    }
    else{
      cout<<0<<endl;
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
