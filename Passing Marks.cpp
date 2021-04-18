// https://www.codechef.com/COOK128C/problems/PSGRADE


void solve(){
    
    int amin , bmin , cmin , t , A ,B , C;

    cin >> amin >> bmin >> cmin >> t >> A >> B >> C;

    if(amin > A || bmin > B || cmin > C || t > (A+B+C)){
        cout << "NO" <<"\n";
    }
    else{
        cout << "YES" <<"\n";
    }
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
