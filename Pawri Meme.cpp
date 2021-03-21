
void solve(){
    string s;
    cin>>s;

    if(s.length() < 5){
      cout<<s<<endl;
    }
    else{
    for(int i=0;i<s.length();i++){
      if(s[i] == 'p' && s[i+1] == 'a' && s[i+2] == 'r' && s[i+3] == 't' && s[i+4] == 'y'){
         s[i+2] = 'w';
         s[i+3] = 'r';
         s[i+4] = 'i'; 
      }
     }
     cout<<s<<endl;
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
