void solve(){
   
   lli n;cin>>n;
   lli arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   sort(arr,arr+n);
   
   lli temp =0;
   int flag = 1;

   for(lli i=0;i<n;i++){
      
      if(arr[i] > (i+1)){
        flag  = 0;
      }
      
      temp += (i+1)-arr[i];
   } 

   if(flag == 0){
    cout<<"Second"<<endl;
   }
   else{
    if(temp % 2 == 1){
      cout<<"First"<<endl;
    }
    else{
      cout<<"Second"<<endl;
    }
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
