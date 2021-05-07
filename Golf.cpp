// https://www.codechef.com/MAY21C/problems/LKDNGOLF






void solve() {

    lli n,x,k;
    cin >> n >> x >> k;
    
    lli tmp = (n+1)%k;
    if(x%k == 0 || x%k == tmp){
        cout <<"YES" <<"\n";
    }else{
        cout <<"NO" <<"\n";
    }

}
