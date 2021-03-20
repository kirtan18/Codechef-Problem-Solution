void solve(){
   
    int n,H,x;
    cin>>n>>H>>x;
    int arr[n];
    int sum = x;

    for(int i=0;i<n;i++){
      cin>>arr[i];   
    } 

   for(int i=0;i<n;i++){
       if(sum + arr[i] == H){
        cout<<"YES"<<endl;
        return;
    }
  }
  cout<<"NO"<<endl;
}

signed main(){
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
    
     solve();         
     return 0;
}
