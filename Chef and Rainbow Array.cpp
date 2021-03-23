
// https://www.codechef.com/problems/RAINBOWA

void solve(){
        int n;
        cin>>n;
        int a[n],i,prev=1;
        for(i=0;i<n;i++)
        cin>>a[i];
        
        if(a[0]!=1)
        cout<<"no\n";
        else
        {
            for(i=0;i<=n/2;i++)
            {
                if(a[i]!=prev)
                prev++;
                if(a[i]!=a[n-i-1] || a[i]!=prev)
                break;
            }
    
        if(i==(n/2)+1 && prev==7)
          cout<<"yes\n";    
        else
          cout<<"no\n";
         
        }

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
