// https://www.codechef.com/COOK128C/problems/CM164364


void solve(){
    
    int n , x ;
    cin >> n >> x;
    unordered_map<int,int>mp;
    int a[n];
    int rem = n - x;

    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int size = mp.size();
    cout << min (rem, size) << "\n";
    
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
