void solve(){
   string n;
   cin>>n;
   
   int sum = 0;
   int curr = 0;

   for(int i=0;i<n.length();i++){
      
      if(n[i] == '0'){
        curr = 0;
        continue;
      }
      else if(n[i] == '1'){
          if(curr == 0){
            curr++;
            sum++;
          }
      }

   }

   cout<<sum<<endl;

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
