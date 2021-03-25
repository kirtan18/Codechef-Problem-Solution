// https://www.codechef.com/problems/COPS


void helper(int *arr,int p,int q){
   for(int i=q;i<=p;i++){
       arr[i] = 1;
     }   
}


void solve(){
    
    int m,x,y;
    cin >> m >> x >> y;
    int a[m];
    rep(i,0,m){
        cin>>a[i];
    }
    
    int arr[101];
    arr[0] = 1;
    
    for(int i=1;i<=100;i++){
        arr[i] = 0;
    }
    int p,q;
    int n = x * y;
    
    rep(i,0,m){
        p = a[i] + n;
        q = a[i] - n;

       if(q < 1){
          q = 1;
       }
       if(p > 100){
          p = 100;
       }

       helper(arr,p,q);
    }

    int count = 0;

    for(int i=1;i<=100;i++){
        if(arr[i] == 0){
            count++;
        }
    }
    
    cout<< count << endl;

     
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
