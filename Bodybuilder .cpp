// https://www.codechef.com/COOK128C/problems/BUILDB



void solve(){
    
   lli n , r;
   cin >> n >> r;
   
   lli a[n];
   lli b[n];
   
   lli time = 0;
   for(lli i = 0 ; i  < n ; i++){
       cin >> a[i]; 
   } 
   for(lli i = 0 ; i < n ;i++){
    cin >> b[i];
   }
   lli m = b[0];
   lli z = b[0];
   lli x = 0;
   
    for(int i = 1; i < n ; i++){
       
        time = (a[i] - a[i-1]);
        z = max(x,z-r*time);
        z += b[i];
        m = max(m,z); 

    }
    cout << m << "\n";    
       
  } 

signed main(){
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif 
    
    int T; cin >> T;    
    while(T--){
       solve();
    }
    return 0;

}
